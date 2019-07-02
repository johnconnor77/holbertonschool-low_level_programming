#include "holberton.h"
/**
 *puts2 - function that prints jumps 2 string inlet
 *@str: string input
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

