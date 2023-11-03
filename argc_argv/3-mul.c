#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int n, b = 0;

	if (argc !=3)
	{
		printf("%s\n", "Error");
		b = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf ("%i\n", n);
	}
	return (b);
}
