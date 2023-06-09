#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints arguments passed in and new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
