#include "lists.h"

/**
 * add_nodeint - Function for reverse linked list iterative method
 * @head: listint_t type of node struct pointer to head
 * @n: conts type int
 * Return: Always successful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *up = NULL;

	up = malloc(sizeof(listint_t));
	if (up == NULL)
		return (NULL);

	up->n = n;
	up->next = *head;
	*head = up;
	return (*head);

}

