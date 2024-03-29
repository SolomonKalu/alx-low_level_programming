#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer containing a copy of string
 * @str: character to dup
 *
 * Return: pointer to the duplicated string, NULL if insufficent mem
 */

char *_strdup(char *str)
{
	char *sr;
	int i;
	int j;

	sr = malloc(sizeof(char *));
	if (sr == NULL)
	{
		return (NULL);
	} else if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
		++j;
	for (i = 0; str[i]; ++i)
		sr[i] = str[i];
	return (sr);
}
