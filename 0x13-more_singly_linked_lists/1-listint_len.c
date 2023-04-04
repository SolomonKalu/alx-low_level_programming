#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list
 * @h: points to the initial node
 *
 * Return: size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t list1 = 0;

	while (h)
	{
		h = (*h).next;
		list1++;
	}
	return (list1);
}
