#include <stdio.h>

/**
* main - Entry point
* Description: Writing lowercase letters in reverse.
* Return: always 0 when successful
*/

int main(void)
{
	char lastletter;

	for (lastletter = 'z'; lastletter >= 'a'; lastletter--)
		putchar(lastletter);

	putchar('\n');

	return (0);
}
