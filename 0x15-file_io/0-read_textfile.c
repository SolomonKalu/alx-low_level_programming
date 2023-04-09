#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - prints nd reads a text from file
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *memstore;
	ssize_t toread;
	ssize_t towrite;

	fd = open(filename, O_RDONLY);

	if (!filename || fd == -1)
		return (0);

	memstore = malloc(sizeof(char) * (letters));

	if (!memstore)
		return (0);
	toread = read(fd, memstore, letters);
	towrite = write(STDOUT_FILENO, memstore, toread);

	close(fd);
	free(memstore);
	return (towrite);
}
