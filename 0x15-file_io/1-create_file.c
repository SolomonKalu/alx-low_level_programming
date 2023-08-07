#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name
 * @text_content: the string to write
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int rdwr;
	int nl = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[nl] != '\0')
	{
		++nl;
	}

	rdwr = write(fp, text_content, nl);
	if (rdwr == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
