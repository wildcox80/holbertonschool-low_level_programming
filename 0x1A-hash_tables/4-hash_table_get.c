#include "hash_tables.h"

/**
 * hash_table_get - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * Return: 1 if successful, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	hash_node_t *crt_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	for (crt_node = ht->array[i]; crt_node != NULL; crt_node = crt_node->next)
	{
		if (strcmp(crt_node->key, key) == 0)
			return (crt_node->value);
	}
	return (NULL);
}
