#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - printing that doggy
 * @d: a pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(Null)";

	if (d->owner == NULL)
		d->owner = "(Null)";

	printf("name: %s\nage %f\nowner: %s", d->name, d->age, d->owner);
}
