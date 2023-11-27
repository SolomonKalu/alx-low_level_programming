#include "main.h"

/**
 * append_text_to_file - function to append text file
 * @filename: file name
 * @text_content: string
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int rdwr;
	int nl = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		while (text_content[nl] != '\0')
			++nl;
	}

	rdwr = write(file, text_content, nl);
	if (rdwr == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
