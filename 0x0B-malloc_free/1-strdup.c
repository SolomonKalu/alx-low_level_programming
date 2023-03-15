#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: duplicated string
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int len = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	for (len++; len--;)
		ret[len] = *--str;
	return (ret);
}
