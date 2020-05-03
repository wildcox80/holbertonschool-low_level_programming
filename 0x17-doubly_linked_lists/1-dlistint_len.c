#include "lists.h"

/**
 * dlistint_len - prints a dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

