#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimun value
 * @max: maximum value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x;
	int dist;

	if (min > max)
	{
		return (NULL);
	}
	dist = (max - min + 1);
	ptr = malloc(sizeof(*ptr) * dist);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < dist; ++x)
	{
		ptr[x] = min++;
	}
	return (ptr);
}
