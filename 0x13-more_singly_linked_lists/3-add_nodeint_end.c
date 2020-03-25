#include "lists.h"

/**
 * add_nodeint_end - Function for add node in the end
 * @head: listint_t type of node struct pointer to head
 * @n: conts type int
 * Return: Always successful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *up = NULL;
	listint_t *tmp = NULL;

	up = malloc(sizeof(listint_t));

	if (up == NULL)
		return (NULL);
	up->n = n;

	if (*head == NULL)
	{
		*head = up;
		up->next = NULL;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = up;
	up->next = NULL;

	return (*head);
}

