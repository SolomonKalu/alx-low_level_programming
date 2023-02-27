#include "main.h"

/**
 * print_rev - prints a string, in reverse, and a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a, x, y;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	y = a;

	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
