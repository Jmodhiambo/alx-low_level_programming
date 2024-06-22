#include <stdio.h>

/**
* main - Entry point
* Description: Writes both lower and uppercase
* Return: always 0 when successful
*/

int main(void)
{
	char a;

	char A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);

	putchar('\n');

	return (0);

}
