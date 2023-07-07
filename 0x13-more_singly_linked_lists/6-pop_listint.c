#include "lists.h"

/**
 * pop_listint - deletes a node and returns node data
 * @head: pointer
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
	{
		return (0);
	}

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
