#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of characters
* @c: the to be initialized.
*
* Return: ptr
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
