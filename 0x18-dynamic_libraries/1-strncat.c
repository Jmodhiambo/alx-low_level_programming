#include "main.h"

/**
* _strncat - appends string 2 to 1 upto nth character.
* @dest: The first string pointer.
* @src: The second string pointer.
* @n: upto nth character to append to string one.
*
* Return: Returns dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		if (i == n)
			break;

		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
