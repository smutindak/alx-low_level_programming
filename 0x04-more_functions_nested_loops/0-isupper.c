#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
    char uppercase = 'A';
    int isupper = 0;

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        if (c == uppercase)
        {
            isupper = 1;
            break;
        }
        
    }
    
    return (0);
}