#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - Sets the node at the hash table.
* @ht: The table to update with a new node
* @key: The key of the new node
* @value: The value of the new node
*
* Return: 1 on success and 0 incase of otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists and update it */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)  /* Key found */
		{
			free(temp->value);       /* Free old value */
			temp->value = strdup(value);  /* Assign new value */
			if (temp->value == NULL)
				return (0);       /* strdup failure */
			return (1);              /* Successfully updated value */
		}

		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
