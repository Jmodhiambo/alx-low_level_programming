#include "main.h"

/**
* _strcat -  concatenates two strings.
* @src: The second string.
* @dest: The first string.
*
* Return: Returns concatenated strings.
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
