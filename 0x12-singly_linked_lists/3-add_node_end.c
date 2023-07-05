#include "lists.h"

/**
 * add_node_end - adds a new node at end of list
 * @head: pointer to node
 * @str: string character
 *
 * Return: address or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *nend;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		current->str = strdup(str);
		if (!current->str)
		{
			free(current);
			return (NULL);
		}
		current->len = strlen(current->str);
	}

	nend = *head;
	if (nend)
	{
		while (nend->next)
			nend = nend->next;
		nend->next = current;
	}
	else
		*head = current;
	return (current);
}
