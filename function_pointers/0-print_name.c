#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name for printer
 * @f: pointer to the print func
 */

void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
