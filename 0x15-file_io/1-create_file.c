#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nl, flw;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!filename || fd == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
	}

	flw = write(fd, text_content, nl);

	if (flw == -1)
		return (-1);

	close(fd);
	return (1);
}
