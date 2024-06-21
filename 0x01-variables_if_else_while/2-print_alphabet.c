#include <stdio.h>

/**
* main - Entry point
*
* Description: the code prints out small letters of alphabet.
* Return: always 0 (Success)
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');


	return (0);

}
