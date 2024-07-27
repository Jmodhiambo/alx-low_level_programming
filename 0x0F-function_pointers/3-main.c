#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
* main - prints the result of mathematical operation.
* @argc: argument counts
* @argv: argument vectors
*
* Return: Always 0 when successful
*/

int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *str = argv[2];
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(str);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (str[0] == '/' || str[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = op_func(num1, num2);

	printf("%d\n", res);

	return (0);
}
