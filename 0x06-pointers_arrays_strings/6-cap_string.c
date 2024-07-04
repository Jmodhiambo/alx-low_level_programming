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
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				cap_next = 1;
				break;
			}
		}

		/* Capitalize the current character if needed */
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			cap_next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cap_next = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			cap_next = 0;
		}
		else
		{
			cap_next = 1;
		}

		i++;
	}

	return (str);
}
