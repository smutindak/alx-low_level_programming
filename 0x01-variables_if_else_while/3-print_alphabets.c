#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter_lowercase;
char letter_uppercase;
for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
{
putchar(letter_lowercase);
}
for (letter_uppercase = 'A'; letter_uppercase <= 'Z'; letter_uppercase++)
{
putchar(letter_uppercase);
}
putchar('\n');
return (0);
}

