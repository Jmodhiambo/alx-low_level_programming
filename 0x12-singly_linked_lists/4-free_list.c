#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees list_t
* @head: pointer to the first element of list_t
*/

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
