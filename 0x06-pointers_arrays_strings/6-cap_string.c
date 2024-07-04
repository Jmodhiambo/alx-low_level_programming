#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @str: The string.
*
* Return: Captalized string.
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			str[i + 1] = str[i + 1] - 32;
	}
	str[i] = '\0';

	return (str);

}
