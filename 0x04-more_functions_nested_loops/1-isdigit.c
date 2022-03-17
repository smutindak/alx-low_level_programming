#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _isdigit - Check if paramter c checks for a digit (0 through 9).
 * @c: Int representing a character
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);

}
