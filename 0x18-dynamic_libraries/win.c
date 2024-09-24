#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

/**
* rand - takes my numbers as random generated
*/
int rand() {
 	static int numbers[] = {9, 8, 10, 24, 75, 9};
	static int index = 0;
	if (index < 6)
	{
		return numbers[index++];
	}
	return rand();
}
