#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *next;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
