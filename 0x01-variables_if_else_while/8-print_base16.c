#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int  a;
for (a = 0; a <= 9; a++)
{
putchar('0' + a);
}
for (a = 97; a <= 102; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
