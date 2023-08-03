#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to strings 0 and 1 char
 * 
 * Return: number converted, otherwise 0
 */
 
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == 0)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = (number << 1) | (*b - '0');
		++b;
	}
	return (number);
}
