#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int j = 0;

	while (str[i] != '\0')
	{
		int is_separator = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (is_separator)
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}

		i++;
	}

	return (str);
}
