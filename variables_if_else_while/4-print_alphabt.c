#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: just the alphabet
 *
 */

int main(void)
{
        char alphabet;

                for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
					if (alphabet != 'e' && alphabet != 'q')
                        putchar(alphabet);
}
        putchar('\n');
return (0);
}
