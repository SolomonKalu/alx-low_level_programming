#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: address of pointer
 * @idx: index
 * @n: value
 *
 * Return: node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *current;
	unsigned int i = 0;

	current = malloc(sizeof(listint_t));
	if (current == 0)
	{
		return (NULL);
	}

	(*current).n = n;
	(*current).next = NULL;

	if (idx == 0)
	{
		(*current).next = *head;
		*head = current;
		return (current);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			(*current).next = (*node).next;
			(*node).next = current;
			return (current);
		}
		++i;
		node = (*node).next;
	}
	free(current);
	return (NULL);
}
