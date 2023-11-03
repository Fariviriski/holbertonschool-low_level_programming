#include "main.h"
#include <stdio.h>
/**
 * main - prints program name followed by new line
 * @argc: name to be changed into
 * @argv: array of pointers to argument
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
