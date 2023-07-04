#include "lists.h"

/**
 * add_node - adds a new node
 * @head: head of list.
 * @str: string
 *
 * Return: address of head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		return (NULL);
	}

	if (str != NULL)
	{
		current->str = strdup(str);
		if (!current->str)
		{
			free(current);
			return (NULL);
		}
		current->len = strlen(current->str);
	}

	current->next = *head;
	*head = current;
	return (current);
}
