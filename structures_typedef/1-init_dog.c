#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize var type
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: godowner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
