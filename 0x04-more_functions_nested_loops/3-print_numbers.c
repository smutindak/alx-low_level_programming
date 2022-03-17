#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_numbers - Print number 0-9 followed by a new line
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_purchar('\n');
}
