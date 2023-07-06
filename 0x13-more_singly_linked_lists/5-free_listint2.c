#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (!head || !*head)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = (*current).next;
		free(temp);
	}
	*head = NULL;
}
