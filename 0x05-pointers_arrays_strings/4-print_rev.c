#include "holberton.h"
/**
 *print_rev - function that print in revrse
 * the input string
 *@s: string input
 *
*/
void print_rev(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
}
for (j = i - 1 ; s[j] != '\0'; j--)
{
	_putchar(s[j]);
}
_putchar('\n');
}

