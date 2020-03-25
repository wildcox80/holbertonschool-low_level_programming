#include "lists.h"
/**
 * sum_listint - function to sum int values of nodes
 * @head: pointer to head node
 * Return:  always successful
 */
int sum_listint(listint_t *head)
{
	unsigned int add;

	if (head == NULL)
		return (0);
	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
