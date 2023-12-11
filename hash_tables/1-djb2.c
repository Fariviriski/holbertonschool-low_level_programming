#include "hash_tables.h"

/**
 * hash_djb2 - implen=ments djb2 algorithm
 * @str: dtring for the hashhhh
 * Return: zero
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashh;
	int c;

	hashh = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hashh) + c;

	return (hashh);
}
