#include "main.h"

/**
 * read_textfile - function to read a text file and print
 * @letters: numbers to read and print
 * @filename: name to read
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
