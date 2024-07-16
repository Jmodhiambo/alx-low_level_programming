#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: the first string
* @s2: the second string
*
* Return: a concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, k = 0, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
		j++;
	}

	ptr = (char *)malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++, l++)
	{
		ptr[l] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; k++, l++)
	{
		ptr[l] = s2[k];
	}
	ptr[l] = '\0';
	return (ptr);
}
