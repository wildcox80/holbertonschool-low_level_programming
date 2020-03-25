#include "lists.h"
/**
 * delete_nodeint_at_index - functioon to delete node at nth  position
 * @head: pointer to head
 * @index: point of node deletion
 * Return: Always successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *up;

	if (*head)
	{
		if (index == 0)
		{
			up = (*head)->next;
			free((*head));
			*head = up;
			return (1);
		}

		while (*head && (i < (index - 1)))
			i++, head = &(*head)->next;

		if (i != (index - 1))
			return (-1);

		up = (*head)->next->next;
		free((*head)->next);
		(*head)->next = up;
		return (1);
	}

	return (-1);
}

