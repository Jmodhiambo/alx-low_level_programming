#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed to it.
* @argc: counts the number of arguments.
* @argv: arguments passed to main function.
*
* Return: Always 0 when successful
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
