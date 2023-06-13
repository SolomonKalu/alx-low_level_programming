#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array and initialize it with a specific char
 * @c: char to initialze
 * @size: arry size
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	} else if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; ++i)
		s[i] = c;
	return (s);
}
