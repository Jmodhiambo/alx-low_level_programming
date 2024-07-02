#include <string.h>
#include "main.h"

/**
* _strlen - checks the length of the string.
* @s: Calculates the length of the string.
*
* Return: Returns the lenght of the string.
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
