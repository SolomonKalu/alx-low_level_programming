#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - it starts here
 *  @argc: argument numbers
 *  @argv: array or pointer arguments
 *
 *  return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 0; i < argc ; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("sum: %d\n", sum);
	return (0);
}
