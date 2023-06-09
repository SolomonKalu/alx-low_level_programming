#include <stdio.h>
#include <stdlib.h>

/**
 * whats_my_name - to print a name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: if successful 0, if not return 1
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
