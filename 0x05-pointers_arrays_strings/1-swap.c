#include "main.h"

/**
 * swap_int - main
 * @a: - int a
 * @b: - int a
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
