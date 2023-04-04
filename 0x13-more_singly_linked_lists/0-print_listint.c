#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints elements of a listint_t list
 * @h: points to the initial node
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
