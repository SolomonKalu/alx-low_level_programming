#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to buffer pointed to by dest
 * @dest: pointer to buffer in which we copy string
 * @src: string copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int width, i;

	width = 0;

	while (src[width] != '\0')
	{
		width++;
	}

	for (i = 0; i < width; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
