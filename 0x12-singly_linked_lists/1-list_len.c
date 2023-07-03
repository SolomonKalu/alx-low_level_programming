#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len -  returns the number of elements in a linked list
 * @h: pointer to node
 *
 * Return: list size
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; ++i)
	{
		h = (*h).next;
	}
	return (i);
}
