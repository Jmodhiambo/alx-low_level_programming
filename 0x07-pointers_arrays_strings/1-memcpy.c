#include "main.h"

/**
* _memcpy - copies n characters from one variable to another.
* @dest: where to copy to.
* @src: where to copy to.
* @n: characters to be copied.
*
*Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n-- != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
