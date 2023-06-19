#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable type struct dog
 * @d: pointer to int d
 * @name: name of dog
 * @age: age of doh
 * @owner: dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
