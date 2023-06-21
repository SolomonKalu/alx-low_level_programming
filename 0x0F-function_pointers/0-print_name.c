#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: func pointer
 *
 * Return: Void or Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name || f)
	{
		f(name);
	}
}
