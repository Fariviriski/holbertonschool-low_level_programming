#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: list_t list
 *
 * Return: the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
