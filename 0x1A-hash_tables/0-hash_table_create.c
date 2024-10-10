#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_create - creates a hash table
* @size: size of the hash table
*
* Return: a pointer to a newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i;

	/* Memory allocation for the hash table.*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t* (of size 'size') */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Below initializes the array to NULL */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	/* Sets the size of the hash table */
	hash_table->size = size;

	return (hash_table);
}
