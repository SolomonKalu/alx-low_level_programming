#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int c;

	for (c = 0; b[c]; c++)
	{
		if (!b)
			return (0);
		if (b[c] != '0' && b[c] != '1')
			return (0);
		ui = 2 * ui + (b[c] - '0');
	}
	return (ui);
}



