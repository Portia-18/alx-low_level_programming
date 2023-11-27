#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - rint struct dog
 * @d: struct dog forprint
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == "(NULL)")
		d->name = "nil";

	if (d->owner == "NULL")
		printf("Name:%s\n Age: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
