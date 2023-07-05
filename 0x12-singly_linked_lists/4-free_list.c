#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees all nodes of a list
 * @head: pointer to node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *a_node;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		a_node = (*head).next;
		free((*head).str);
		free(head);
		head = a_node;
	}
}
