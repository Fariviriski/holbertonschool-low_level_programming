#include "dog.h"
#include <stdlib.h>

char *_strcopy(char *dest, char *src);

/**
 * _strlen - retrun string lenght
 * @str: string
 *
 * Return: 0
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}


/**
 * _strcopy - copies a string
 * @dest: where to copy
 * @src: source for copy
 *
 * Return: 0
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new doggy
 * @name: doggy name
 * @age: doggy age
 * @owner: doggy parent
 * Return: new doge
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doge;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	return (NULL);

	doge->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = _strcopy(doge->name, name);
	doge->age = age;
	doge->owner = _strcopy(doge->owner, owner);

		return (doge);
}
