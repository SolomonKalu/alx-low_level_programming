#include "main.h"
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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
