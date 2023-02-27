#include "main.h"

/**
 * puts_half - prints half of a string, and a new line
 * @str: string printed
 */
void puts_half(char *str)
{
	int height, n, a;

	height = 0;

	while (str[height] != '\0')
	{
		height++;
	}

	if (height % 2 == 0)
	{
		for (a = height / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	} else if (height % 2)
	{
		for (n = (height - 1) / 2; n < height - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
