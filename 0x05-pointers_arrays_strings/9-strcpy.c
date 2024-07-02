#include "main.h"

/**
* _strcpy - copies one string to another.
* @dest: Where to copy the string.
* @src: The string to copu.
*
* Return: Retruns copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
