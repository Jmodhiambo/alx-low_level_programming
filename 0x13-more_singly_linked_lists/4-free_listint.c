#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees the listint_t.
* @head: pointer to the head of the listint.
*/

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;

	if (temp == NULL)
	{
		free(temp);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}
		free(temp);
	}
}
