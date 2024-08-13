#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
size_t _strlen(const char *s);
int create_file(const char *filename, char *text_content);
void close_file(int fd);
void print_error(const char *message, const char *filename, int exit_code);
void copy_content(int file_from, int file_to, char *buffer,
char *file_from_name, char *file_to_name);
int append_text_to_file(const char *filename, char *text_content);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);
#endif /* MAIN_H */
