#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node;
	listint_t *next_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	next_node = (listint_t *)malloc(sizeof(listint_t));
	if (!next_node)
		return (NULL);

	while ((i < idx) && *head)
		i++, head = &(*head)->next;

	if (i != idx)
		return (NULL);

	next_node->n = n;
	prev_node = *head;
	next_node->next = prev_node;
	*head = next_node;

	return (next_node);
}
