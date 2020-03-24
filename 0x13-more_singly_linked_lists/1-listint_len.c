#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
