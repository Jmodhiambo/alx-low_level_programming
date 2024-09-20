#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - inserts a node a given postion
* @h: double pointer to the head of the list
* @idx: the index to insert the new node
* @n: the value of the new node
*
* Return: returns a modified node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	unsigned int pos = 0;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (ptr != NULL)
	{
		if (pos == idx - 1)
		{
			new->next = ptr->next;
			new->prev = ptr;
			new->n = n;

			if (ptr->next != NULL)
				ptr->next->prev = new;
			ptr->next = new;
			return (new);
		}
		pos++;
		ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
