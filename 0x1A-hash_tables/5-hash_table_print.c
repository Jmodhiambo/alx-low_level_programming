#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - Prints the key-value pairs in a hash table.
* @ht: The hash table.
*
* Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *node;
	int first = 1; /* Flag to manage commas between key-value pairs */

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	printf("{");

	/* Loop through the hash table array */
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		/* Loop through the linked list at the current index */
		while (node != NULL)
		{
			/* Print a comma only if this is not the first key-value pair */
			if (!first)
				printf(", ");

			/* Print the key-value pair */
			printf("'%s': '%s'", node->key, node->value);
			first = 0; /* Ensure future pairs are preceded by a comma */

			node = node->next;
		}
	}

	printf("}\n");
}
