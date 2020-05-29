#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int x;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	x = 0;
	for (i = 0; i < ht->size; i++)
	{
		for (temp = ht->array[i]; temp != NULL; temp = temp->next)
		{
			if (x == 0)
				x = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
		}
	}
	printf("}\n");
}
