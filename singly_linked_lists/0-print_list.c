#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: list
 *
 * Return: nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
