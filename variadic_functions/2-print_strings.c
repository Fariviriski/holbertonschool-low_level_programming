#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
 * print_strings - prints strings with new line
 * @separator: tween the strings
 * @n: number of strings
 * @...: variable num of strings
 */

void print_strings(const char *separator, unsigned int n, ...)
{

	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);

}
