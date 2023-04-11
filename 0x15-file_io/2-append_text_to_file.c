#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nl, flw = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl];)
			nl++;
	}

	flw = write(fd, text_content, nl);

	if (fd == -1 || flw == -1)
		return (-1);

	close(fd);
	return (-1);
}
