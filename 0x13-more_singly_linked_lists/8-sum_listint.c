#include "lists.h"

/**
 * sum_listint - returns summ of all data in a linked list
 * @head: pointer
 *
 * Return: sum of data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = (*head).next)
	{
		sum += (*head).n;
	}
	return (sum);
}
