#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates a char array
 * @size: char array size
 * @c: the default byte filling
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);

	if (!size || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
