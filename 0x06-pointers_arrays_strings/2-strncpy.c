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
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
