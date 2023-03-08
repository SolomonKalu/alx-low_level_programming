#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - returns lenght oof string
 * @s: string to measure
 *
 * Return: integer length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
