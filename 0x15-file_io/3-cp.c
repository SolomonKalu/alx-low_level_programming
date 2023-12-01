#include "main.h"

/**
 * main - copying the content of a file to file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_Read, fd_Write, r, x, y;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_Read = open(argv[1], O_RDONLY);
	if (fd_Read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_Write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_Read, buf, BUFSIZ)) > 0)
	{
		if (fd_Write < 0 || write(fd_Write, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_Read);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(fd_Read);
	y = close(fd_Write);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_Read);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_Write);
		exit(100);
	}
	return (0);
}
