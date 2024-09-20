#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes a node at index
* @head: double pointer to the head of the node
* @index: index of the node to delete
*
* Return: -1 on failure and 1 on success
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;

		free(ptr);
		return (1);
	}
	while (ptr != NULL && pos < index)
	{
		ptr = ptr->next;
		pos++;
	}

	if (ptr == NULL) /* Check if node exists at index */
		return (-1);

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

        free(ptr);
	return (1);

}
