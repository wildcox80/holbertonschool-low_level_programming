#include "lists.h"
/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 * Return: always successful
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node;

	if (head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
