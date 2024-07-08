#include "main.h"

/**
* _memset - fills constant b to memory pointed by s.
* @s: String memory.
* @b: Character byte
* @n: First n number of bytes to be filled with b.
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
