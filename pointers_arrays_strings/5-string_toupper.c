#include "main.h"
/**
 * string_toupper - changes letters of a string to uppercase
 * @a: string to be changed
 * Return: (a) uppercase string from pointed string
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
