#include "hash_table.h"

/**
 * key_index - get the index of a key
 * @key: ze key
 * @size: size of hashh
 * Return: 0
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
