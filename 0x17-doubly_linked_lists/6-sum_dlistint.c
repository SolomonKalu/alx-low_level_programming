#include "lists.h"

/**
 * sum_dlistint - func that sums the values of a list
 * @head: head node pointer
 *
 * Return: int values
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
