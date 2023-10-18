#include <stdio.h>
#include "main.h"
/**
 *islower - returns loest char
 *
 * Return: 0 or 1 if lowercase c
 */

int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}
