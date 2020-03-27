#include "lists.h"

/**
 * print_listint - function to print all elements
 * @h: listint_t type of node struct
 * Return: Always successful
 */

size_t print_listint(const listint_t *h)

{
	int x;

	x = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}

