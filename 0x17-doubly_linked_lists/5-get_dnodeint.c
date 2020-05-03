#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of dlistint_t list
 * @index: index of node
 *
 * Return: address of `n`th node or `NULL` if does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}

