#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates memory block.
* @ptr: pointer to null
* @old_size: initial size of the elements.
* @new_size: new size of the elements.
*
* Return: a newly sized memory block.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ptr1);
	free(ptr);

	return (ptr1);
}
