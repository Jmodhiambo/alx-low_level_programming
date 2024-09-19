#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - sums the data of the list
* @head: pointer to the head of the list
*
* Return: returns sum of the data in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		sum += (ptr->n);
		ptr = ptr->next;
	}

	return (sum);
}
