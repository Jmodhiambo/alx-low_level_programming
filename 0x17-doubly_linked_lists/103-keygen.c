#include <stdio.h>
#include <string.h>

/**
* main - Generates a key based on the provided username
* @argc: The argument count
* @argv: The argument vector (array of strings)
*
* Return: 0 on success, 1 if the incorrect number of arguments is provided
*/

int main(int argc, char *argv[])
{
	char *username;
	int len, key, i;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	username = argv[1];
	len = strlen(username);
	key = 0;

	for (i = 0; i < len; i++)
	{
		key += username[i];
	}

	key = (key ^ 0x4f) & 0xff;

	printf("%d\n", key);
	return (0);
}
