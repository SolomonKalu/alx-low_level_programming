#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *str;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	return (str);
}
