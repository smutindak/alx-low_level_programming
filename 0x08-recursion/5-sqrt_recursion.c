#include "main.h"

/**
 * _sqrt_recursion - sqrt recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: recursion
 */

int _sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
