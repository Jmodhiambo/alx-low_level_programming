#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - gets the nth node in a list
* @head: pointer to the head of the list.
* @index: index of the nth node to be returned.
*
* Return: returns the nth node in a list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
