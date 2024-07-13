#include <stdio.h>
#include <stdlib.h>

/**
* main - print the result of the multiplication
* @argc: counts the number of command line arguments.
* @argv: array of command line arguments.
*
* Return: 0 when successful and 1 when there is an error.
*/

int main(int argc, char *argv[])
{
	int multi = 0;

	if (argc > 1)
	{
		multi = atol(argv[1]) * atol(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
