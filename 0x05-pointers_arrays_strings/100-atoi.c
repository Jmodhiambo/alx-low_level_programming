#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: the string to convert
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			/* Do nothing, as '+' is for positive number*/
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (sign * result);
}
