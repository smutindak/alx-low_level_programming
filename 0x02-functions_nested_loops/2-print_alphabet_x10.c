#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
    char letter;
    char b=0;

    for(b=0; b<10;b++)
    {
        for(letter='a'; letter<='z';letter++)
        putchar(letter);
        putchar('\n');
    }   
    return (0);
}