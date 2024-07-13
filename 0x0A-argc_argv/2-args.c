#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all command line arguments.
* @argc: argument count.
* @argv: argument array.
*
* Return: Always 0 when successful.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
