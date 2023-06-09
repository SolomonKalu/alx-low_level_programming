#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print a name and new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: if successful 0, if not return 1
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
