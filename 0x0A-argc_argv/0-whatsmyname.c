#include <stdio.h>
#include <stdlib.h>

/**
* main - return the name of the file using argument.
* @argc: Void
* @argv: file name
*
* Return: Always 0 when successful
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
