#include "main.h"

/**
 * swap - main
 * @n: - pointer to int.
 */

void swap(int *a, int *b)
{
    int swap; 

    swap = *a;
    *a = *b;
    *b = swap;

}