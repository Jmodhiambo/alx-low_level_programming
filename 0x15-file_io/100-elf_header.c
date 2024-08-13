#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);

/**
* main - displays the information contained in the ELF header at the start
*        of an ELF file.
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, exits with code 98 on error.
*/
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	check_elf(header.e_ident);
	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_ident);
	print_osabi(header.e_ident);
	print_abiversion(header.e_ident);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}

/**
* check_elf - checks if a file is an ELF file.
* @e_ident: pointer to the ELF magic numbers.
*/
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
	    e_ident[EI_MAG1] != ELFMAG1 ||
	    e_ident[EI_MAG2] != ELFMAG2 ||
	    e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
* print_magic - prints the magic numbers of an ELF header.
* @e_ident: pointer to the ELF magic numbers.
*/
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
* print_class - prints the class of an ELF header.
* @e_ident: pointer to the ELF class.
*/
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	printf(e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32\n" : "ELF64\n");
}

/**
* print_data - prints the data of an ELF header.
* @e_ident: pointer to the ELF data.
*/
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	printf(e_ident[EI_DATA] == ELFDATA2LSB ?
	       "2's complement, little endian\n" :
	       "2's complement, big endian\n");
}

/**
* print_version - prints the version of an ELF header.
* @e_ident: pointer to the ELF version.
*/
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d (current)\n",
	       e_ident[EI_VERSION]);
}

/**
* print_osabi - prints the OS/ABI of an ELF header.
* @e_ident: pointer to the ELF OS/ABI.
*/
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		default: printf("<unknown: %x>\n", e_ident[EI_OSABI]);
        
	}
}

/**
* print_abiversion - prints the ABI version of an ELF header.
* @e_ident: pointer to the ELF ABI version.
*/
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
* print_type - prints the type of an ELF file.
* @e_type: ELF type.
*/
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		default: printf("<unknown: %x>\n", e_type);
	}
}

/**
* print_entry - prints the entry point address of an ELF file.
* @e_entry: ELF entry point address.
*/
void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n",
	       (unsigned long)e_entry);
}
