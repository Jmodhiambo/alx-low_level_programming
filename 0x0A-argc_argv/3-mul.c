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
	int num1, num2, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multi = num1 * num2;

	printf("%d\n", multi);

	return (0);
}
