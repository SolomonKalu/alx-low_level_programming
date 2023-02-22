#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y, z, j, k;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	j = z % 10;
	k = (z - j) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(k + '0');
	_putchar(j + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
