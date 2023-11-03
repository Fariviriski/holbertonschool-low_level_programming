#include "main.h"
#include <stdio.h>
/**
 * main - prints program name followed by new line
 * @argc: name to be changed into
 * @argv: array of pointers to argument
 * Return: always 0
 */

int main(int argc, char **argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
