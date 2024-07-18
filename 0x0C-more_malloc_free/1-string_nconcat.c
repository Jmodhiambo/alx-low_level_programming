#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: string one
* @s2: string two
* @n: nth chars of string s2 to concatenate to string s1.
*
* Return: a pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, l = 0, j = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
	{
		l++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (l2 <= n)
		n = l2;

	ptr = malloc(sizeof(char) * (l + n + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++, j++)
		ptr[j] = s1[i];
	for (i = 0; i < n; i++, j++)
		ptr[j] = s2[i];
	ptr[j] = '\0';
	return (ptr);
}
