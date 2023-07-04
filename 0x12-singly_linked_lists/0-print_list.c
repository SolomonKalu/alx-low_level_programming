#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; ++i)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = (*h).next;
	}
	return (i);
}
