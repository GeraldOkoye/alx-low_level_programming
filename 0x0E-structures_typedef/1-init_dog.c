#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function with 4 arguments
 * @d: structure pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * descripition: initialize a variable of type
 * Return: na
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
