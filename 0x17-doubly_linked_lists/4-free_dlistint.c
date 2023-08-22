#include "lists.h"

/**
 * free_dlistint - fubc that frees a list
 * @head: head node pointer
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
