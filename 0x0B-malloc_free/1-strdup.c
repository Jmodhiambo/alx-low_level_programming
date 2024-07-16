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

	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc(i + 1);

	if (ptr == NULL)
		return (NULL);
	j = i;
	i = 0;

	for (i = 0; i <= j; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
