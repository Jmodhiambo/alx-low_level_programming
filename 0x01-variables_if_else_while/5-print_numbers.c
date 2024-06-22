#include <stdio.h>

/**
* main - Entry point
* Description: printing numbers from 0 to 9.
*
* Return: always 0 when successful
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");

	return (0);

}

