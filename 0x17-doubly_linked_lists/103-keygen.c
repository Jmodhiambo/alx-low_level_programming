#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - Generates a key for the given username
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *username;
	int len, i;
	unsigned int key;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	username = argv[1];
	len = strlen(username);
	key = 0;

	for (i = 0; i < len; i++)
	{
		key += username[i] * (i + 1);
	}

	key = (key ^ 0xabcdef) & 0xffffffff;

	printf("%u\n", key);

	return (0);
}
