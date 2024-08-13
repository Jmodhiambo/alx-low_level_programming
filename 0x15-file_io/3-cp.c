#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void close_file(int fd);
void print_error(const char *message, const char *filename, int exit_code);
void copy_content(int file_from, int file_to, char *buffer,
		  char *file_from_name, char *file_to_name);

/**
* main - Entry point for the file copy program.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, or an appropriate exit code on failure.
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", "", 97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error("Error: Can't read from file", argv[1], 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		print_error("Error: Can't write to", argv[2], 99);
	}

	copy_content(file_from, file_to, buffer, argv[1], argv[2]);

	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
* copy_content - Copies content from one file descriptor to another.
* @file_from: The file descriptor to read from.
* @file_to: The file descriptor to write to.
* @buffer: The buffer used for reading and writing data.
* @file_from_name: The name of the source file (used in error messages).
* @file_to_name: The name of the destination file (used in error messages).
*/

void copy_content(int file_from, int file_to, char *buffer,
		  char *file_from_name, char *file_to_name)
{
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close_file(file_from);
			close_file(file_to);
			print_error("Error: Can't write to", file_to_name, 99);
		}
	}

	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		print_error("Error: Can't read from file", file_from_name, 98);
	}
}

/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to close.
*
* If closing the file descriptor fails, it prints an error message
* and exits with code 100.
*/

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* print_error - Prints an error message and exits with a specified code.
* @message: The error message to print.
* @filename: The name of the file causing the error (can be an empty string).
* @exit_code: The exit code to use when terminating the program.
*/

void print_error(const char *message, const char *filename, int exit_code)
{
	if (filename && filename[0] != '\0')
	{
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s\n", message);
	}
	exit(exit_code);
}
