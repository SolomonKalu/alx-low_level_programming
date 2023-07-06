#include "lists.h"

/**
 * add_nodeint - adds a node at beginning of list.
 * @head: pointer to node.
 * @n: value.
 *
 * Return: node pointer.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));

	if (!current)
	{
		return (NULL);
	}

	current->next = NULL;
	current->n = n;

	if (*head)
		current->next = *head;
	*head = current;
	return (current);
}
