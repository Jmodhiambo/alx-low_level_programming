#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees the listint_t.
* @head: pointer to the head of the listint.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
