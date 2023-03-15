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
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("mul: %d\n", mul);
	return(0);
}
