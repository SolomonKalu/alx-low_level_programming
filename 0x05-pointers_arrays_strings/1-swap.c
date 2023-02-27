#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to value(a)
 * @b: pointer to value(b)
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}

