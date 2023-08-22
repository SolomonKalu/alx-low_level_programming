#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: head of list
 * 
 * Return: nodes num
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);

	while (h->old != NULL)
		h = h->old;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		++c;
		h = h->next;
	}

	return (c);
}
