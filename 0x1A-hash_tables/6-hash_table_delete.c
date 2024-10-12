#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_delete - Deletes a hash table.
* @ht: The hash table.
*
* Return: void.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *node, *temp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Loop through the hash table array */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		/* Loop through the linked list at the current index */
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
