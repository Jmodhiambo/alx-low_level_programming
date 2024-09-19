#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - counts the number of nodes or elements
* @h: pointer to the head to of doubly linked list
*
* Return: returns the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
