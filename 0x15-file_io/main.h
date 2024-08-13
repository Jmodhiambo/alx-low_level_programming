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

#endif /* MAIN_H */
