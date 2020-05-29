#include "hash_tables.h"
/**
 * hash_table_set - function that new node to a hash table
 * @ht: is the hash table to be updated
 * @key: key cannot be empty
 * @value: value to be associated to the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new_node, *tmp;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
		return (0);
	if (strcmp("", key) == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			free(new_node);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->value;

	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
