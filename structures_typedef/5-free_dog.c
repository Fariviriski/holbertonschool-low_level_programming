#include<stdlib.h>
#include "dog.h"

/**
 * free_dog - who let the dogs out?
 * @d: doge to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
