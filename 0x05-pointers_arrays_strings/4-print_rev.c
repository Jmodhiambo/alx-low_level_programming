#include "main.h"

/**
* print_rev - reverses a string
* @s: The string
*
* Return: void
**/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');

}
