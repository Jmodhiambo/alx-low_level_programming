#include "main.h"

/**
* puts2 - prints current and skips the next char.
* @str: The char to be printed.
*
* Return: void.
*/

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len += 2;
	}
	_putchar('\n');
}
