#include "lists.h"

/**
 * free_listint - Function for free memory list
 * @head: listint_t type of node struct pointer to head
 * Return: Always successful
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
