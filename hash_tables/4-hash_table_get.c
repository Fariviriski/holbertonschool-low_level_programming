#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key
 * @ht: pointing to the hashh
 * @key: key to the value of
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsiged char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
