#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random password for 101-crackme
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	char password[12];

	srand(time(NULL));

	for (i = 0; i < 11; i++)
	{
		password[i] = (rand() % 94) + 33;
	}

	password[11] = '\0';

	printf("%s\n", password);

	return (0);
}
