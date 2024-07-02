#include "main.h"

/**
* rev_string - reverses a string
* @s: The string
*
* Return: void
*/

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len /2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 -i];
		s[len - 1 -i] = temp;
	}
	_putchar('\n');

}
