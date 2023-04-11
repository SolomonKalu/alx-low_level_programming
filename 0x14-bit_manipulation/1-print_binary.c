#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void (nothing)
 */

void print_binary(unsigned long int n)
{
	int pb = 0;
	int sob = sizeof(n) * 8;

	while (sob)
	{
		if (n & 1L << --sob)
		{
			_putchar('1');
			pb++;
		}
		else if (pb)
			_putchar('0');
	}
	if (!pb)
		_putchar('0');
}
