#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: array elements
 * @size: array size
 * @cmp: func pointer
 *
 * Return: Void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
