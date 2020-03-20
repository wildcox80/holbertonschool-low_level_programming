#include "lists.h"
/**
 * print_list - function to print node contents
 * @h: pointer to node struct
 * Return: Always Successful
 */
size_t print_list(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		if (h->str ==  NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
