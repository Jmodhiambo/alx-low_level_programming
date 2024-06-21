#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
* Description: checks the last digit of a value
* Return: always 0 (Success)
*/
int main(void)
{
	
	int n;
	
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	ld = n % 10;	

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is 0\n", n, ld);

	return (0);
}
