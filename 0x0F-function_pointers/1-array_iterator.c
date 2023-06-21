#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @size: array size
 * @action: func pointer
 * @array: pointer to array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
