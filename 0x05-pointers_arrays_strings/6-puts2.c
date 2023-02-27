#include "main.h"

/**
 * puts2 - prints every other char of a string
 * starting with the first char, and a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int height, i;

	height = 0;

	while (str[height] != '\0')
	{
		height++;
	}

	for (i = 0; i < height; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
