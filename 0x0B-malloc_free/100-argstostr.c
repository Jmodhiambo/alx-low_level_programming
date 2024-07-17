#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of the program.
* @ac: argument count
* @av: argument vector
*
* Return: concatenated string of arguments, NULL on failure
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len + 1;
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[j++] = av[i][len++];
		}
		str[j++] = '\n';
	}

	str[j] = '\0';

	return (str);
}
