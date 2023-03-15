#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @argc: argument numbers
 * @argv: array of pointer argument
 *
 * return: always 0.
 */

int main(int argc, char *argv[])
{
	int multiply = 0;

	for (int i = 0; i < argc; i++)
	{
		multiply *= atoi(argv[i]);
	}
	printf("multiply: %d\n", multiply);
	return(0);
}
