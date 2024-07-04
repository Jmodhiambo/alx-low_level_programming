#include "main.h"

/**
* string_toupper - converts lower to upppercase letters.
* @str: The character.
*
* Return: Returns uppercase characters.
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);

}
