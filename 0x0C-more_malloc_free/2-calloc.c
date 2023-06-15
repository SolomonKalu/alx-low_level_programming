#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: byte
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (size * nmemb); ++a)
	{
		((char *)ptr)[a] = 0;
	}
	return (ptr);
}
