#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index -get node at nth index
* @head: pointer to the head of the node
* @index: index of the node to get
*
* Return: returns the value of the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
