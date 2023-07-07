#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: node index from 0
 *
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n = 0;

	while (node != NULL && n < index)
	{
		node = (*node).next;
		n++;
	}
	return (node);
}
