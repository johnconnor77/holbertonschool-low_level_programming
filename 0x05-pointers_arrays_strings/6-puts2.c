#include "holberton.h"
/**
 *puts2 - function that prints jumps 2 string inlet
 *@str: string input
*/

void puts2(char *str)
{
int i, j;
for (j = 0; str[j] != '\0'; j++)
{
}
for (i = 0; i < j ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

