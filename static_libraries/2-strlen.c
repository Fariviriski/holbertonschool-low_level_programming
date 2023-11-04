#include "main.h"
/**
 * _strlen - prints string lenght
 * @s: string of characters to be deferenced
 * Return: lenght of pointed string
 */

int _strlen(char *s)
{
	unsigned int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
