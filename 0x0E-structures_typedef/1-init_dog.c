#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - Entry point
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
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
