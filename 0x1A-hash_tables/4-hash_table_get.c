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

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (0);
	i = key_index((const char *)key, ht->size);
	if (ht->array[i] == NULL)
		return (NULL);
	i = 0;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	return (NULL);
}
