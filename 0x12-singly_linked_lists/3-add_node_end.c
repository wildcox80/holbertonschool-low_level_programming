#include "lists.h"

/**
 * *add_node_end - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: Always Successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *actual;
	int x;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		;

	new->len = x;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	actual = *head;

	while (actual->next != NULL)
		actual = actual->next;

	actual->next = new;
	return (new);
}

