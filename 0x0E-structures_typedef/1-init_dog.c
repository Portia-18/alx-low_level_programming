#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a var of type struct dog
 * @d: pointer to struct dog to initialise
 * @name: to initialize
 * @age: to init
 * @owner: to init
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
