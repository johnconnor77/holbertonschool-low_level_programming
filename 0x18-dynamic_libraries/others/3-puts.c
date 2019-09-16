#include "holberton.h"
/**
 *_puts - function that prints string inlet
 *@s: string input
*/

void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}

