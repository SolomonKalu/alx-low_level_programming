#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: byte size
 * @new_size: byte size
 *
 * Return: pointer old
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (!new_size)
	{
		return (free(ptr), NULL);
	}
	pt = malloc(new_size);
	if (pt == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < old_size; ++i)
	{
		pt[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (pt);
}
