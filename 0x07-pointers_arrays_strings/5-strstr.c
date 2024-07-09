#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring.
* @haystack: The string to be searched.
* @needle: The substring to find.
*
* Return: A pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return (NULL);
}
