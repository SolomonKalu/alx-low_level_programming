#include "lists.h"

/**
 * dlistint_len - returns the length list
 * @h: head node address
 *
 * Return: list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		++x;
	}
	return (x);
}
