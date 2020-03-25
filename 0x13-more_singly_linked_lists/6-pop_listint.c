#include "lists.h"
/**
 * pop_listint - function to free memory heap with free
 * @head: pointer to head of struct listint_t type
 * Return: always successful
 */

int pop_listint(listint_t **head)

{
	listint_t *up = NULL;
	int x = 0;

	if (*head == NULL)
	{
		return (0);
	}

	up = (*head)->next;
	x = up->n;
	*head = up->next;
	free(up);
	return (x);

}
