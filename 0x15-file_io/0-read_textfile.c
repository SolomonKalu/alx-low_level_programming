#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads text file and prints to POSIX standard output
 * @letters: numbers to read and print
 * @filename: to read
 *
 * Return: number to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *b;
	ssize_t wr, rd;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		return (0);
	}

	rd = read(fp, b, letters);
	wr = write(STDOUT_FILENO, b, rd);

	close(fp);
	free(b);

	return (wr);
}
