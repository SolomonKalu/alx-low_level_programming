#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc)
		for (i = 0; i < argc; ++i)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
