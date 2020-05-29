#include "hash_tables.h"
/**
 * hash_table_create - C function to create a hash table
 * @size: size of hash table, unsigned long int type
 * Return: returns a pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int counter;
	hash_table_t *new_table = NULL;

	/* Allocate Memory for new hash_table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	/* Allocate Memory for node in new hash_table */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (counter = 0; counter < size; counter++)
	{
		new_table->array[counter] = NULL;
	}
	return (new_table);
}

