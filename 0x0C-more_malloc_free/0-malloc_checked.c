#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - calls exit failure
 * @b: number of allocated bytes
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
