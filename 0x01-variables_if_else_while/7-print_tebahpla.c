#include <stdio.h>
/**
 * main - lowercase alphabet in reverse
 *
 * Return: Always 0 (Sucees)
 */
int main(void)
{
	char num;

	for (num = 'w'; num >= 'c'; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
