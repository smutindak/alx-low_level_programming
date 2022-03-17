#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_numbers - Print number 0-9 followed by a new line
 * @a : integer a
 * Return: Always 0.
 */

void print_numbers(void)
{
    int a;

    for (a = 0; a <= 9; a++)
    {
        _putchar('0' + a);
    }
    _purchar('\n');
}