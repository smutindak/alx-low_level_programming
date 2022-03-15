#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar (letter);
		letter++;
	}
	_putchar ('\n');
	return (0);
}
