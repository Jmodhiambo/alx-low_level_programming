#include "main.h"

/**
* _strncpy - copies n character of string 2 to string 1.
* @dest: The first string.
* @src: The second string.
* @n: Number of charcters to be copied.
*
* Return: Returns dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dest[dlen] = src[i];
		dlen++;
		i++;

		if (i == n && dlen == n - 1)
			break;
	}
	dest[dlen] = '\0';

	return (dest);

}
