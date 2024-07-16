#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - return a pointer to newly located space in memory.
* @str: the new string
*
* Return: ptr
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = (char *)malloc(i + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';
	return (ptr);
}
