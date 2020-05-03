#include "lists.h"

/**
 * print_dlistint - prints a dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}

