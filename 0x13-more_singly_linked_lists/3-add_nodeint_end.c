#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end.
 * @head: pointer to node
 * @n: value.
 *
 * Return: pointer.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *node;

	current = malloc(sizeof(listint_t));
	if (!current)
	{
		return (NULL);
	}

	current->next = NULL;
	current->n = n;

	if (!*head)
	{
		*head = current;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = current;
	}
	return (current);
}
