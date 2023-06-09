#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes
 *
 * Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
