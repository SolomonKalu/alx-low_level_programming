#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string to be changed
 * @to: pointer to the string to change to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
