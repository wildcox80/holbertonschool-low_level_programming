#include "hash_tables.h"
/**
 * hash_table_set - function that new node to a hash table
 * @ht: is the hash table to be updated
 * @key: key cannot be empty
 * @value: value to be associated to the key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new_node, *ptr, *tmp;
	/* Return NULL if nothing else */
	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
		return (0);
	if (strcmp("", key) == 0)
		return (0);
	/* create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	/* Get hash_key and index */
	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
		tmp = ht->array[i];
		ptr = tmp;
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp);
				break;
			}
			tmp = tmp->next;
		}
		/* Add new_node to start linked list */
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	ht->array[i] = new_node;
	return (1);
}
