#include <stdio.h>

/**
* main - Entry point
* Description: printing numbers using putchar
* Return: always 0 when successful
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		char charNumber = (char)number;

	putchar(charNumber);

	}
	putchar('\n');



	return (0);

}
