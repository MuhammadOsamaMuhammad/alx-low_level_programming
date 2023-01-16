#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * print_dog - print dog fileds
  * @d: A dog structure.
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nill)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->age : "(nill)");
	}
}
