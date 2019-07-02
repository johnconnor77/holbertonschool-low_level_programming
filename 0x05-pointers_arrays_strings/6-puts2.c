#include "holberton.h"
/**
 *puts2 - function that prints jumps 2 string inlet
 *@s: string input
*/

void puts2(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}

