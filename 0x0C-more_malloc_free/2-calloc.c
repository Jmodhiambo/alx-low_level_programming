#include "main.h"
#include <stdlib.h>

/**
* _calloc - to allocates memory to an array.
* @nmemb: an array
* @size: size of variable type.
*
* Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}

	return (ptr);

}
