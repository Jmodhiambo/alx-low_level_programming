#include "main.h"

/**
* wildcmp - compares two strings and returns 1 if the strings can be
*           considered identical, otherwise return 0.
* @s1: the first string.
* @s2: the second string which can contain the special character *.
*
* Return: 1 if the strings can be considered identical, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == '\0' && *(s2 + 1) != '\0')
			return (0);
		if (wildcmp(s1, s2 + 1))
			return (1);
		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
