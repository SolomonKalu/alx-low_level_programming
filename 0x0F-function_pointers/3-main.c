#include "3-calc.h"

/**
 * main - check the code
 * @argc:argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int a, b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = get_op_func(argv[2]);
	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}
	result = fun(a, b);
	printf("%i\n", result);
	return (0);
}
