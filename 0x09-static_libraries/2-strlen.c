#include "main.h"

/**
 * _strlen - function returning length of a string
 * @s: string to evalute
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int y;

	y = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	return (y);
}
