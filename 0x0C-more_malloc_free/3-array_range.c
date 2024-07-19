#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: starting point of the range
* @max: the ending point of the range
*
* Return: returns pointer to a newly created array.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;

	}
	return (ptr);

}
