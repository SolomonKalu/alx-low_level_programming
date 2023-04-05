#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @n: value of node
 * @head: points to node
 *
 * return: the pointer to node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end = malloc(sizeof(listint_t));

	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_end;
	} else
	{

		listint_t *initial = *head;

		while (initial->next != NULL)
		{
			initial = initial->next;
		};
		initial->next = add_end;
	}
	return (add_end);
}

