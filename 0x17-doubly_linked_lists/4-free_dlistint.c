#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees the doubly linked list
* @head: pointer to the head of the list
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *ptr2;

	while (ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		free(ptr2);
	}
	free(ptr);
}
