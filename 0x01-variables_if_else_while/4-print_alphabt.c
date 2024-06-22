#include <stdio.h>

/**
* main - Entry point
* Description: omitting letters q and e
*
*Return: Always 0 when successful
*/

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			continue;
		}

		putchar(lowercase);
	}

	putchar('\n');

	return (0);

}
