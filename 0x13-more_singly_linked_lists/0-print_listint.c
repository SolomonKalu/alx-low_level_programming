#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints elements of a listint_t list
 * @h: points to the initial node
 *
 * return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t val = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		val++;
	}
	return (val);
}
