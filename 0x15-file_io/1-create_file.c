#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

/**
* _strlen - computes the length of a string.
* @s: the string to compute the length of.
*
* Return: the length of the string.
*/
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}


/**
* create_file - creates a file with the specified content.
* @filename: name of the file to create.
* @text_content: NULL terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_len;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = _strlen(text_content);
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1 || (size_t)bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
