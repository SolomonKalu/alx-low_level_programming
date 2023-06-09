#include "main.h"

/**
 * _puts - function that prints a string, and a new line, to stdout
 * @str: pointer string to print
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
