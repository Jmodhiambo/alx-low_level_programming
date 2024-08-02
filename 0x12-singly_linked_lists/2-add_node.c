#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: double pointer to the head of the list
* @str: string to be duplicated and added to the new node
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	ptr->str = dup_str;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
