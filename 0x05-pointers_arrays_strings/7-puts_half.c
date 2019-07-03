#include "holberton.h"
/**
 *puts_half - function that prints last half string inlet
 *@s: string input
*/

void puts_half(char *s)
{
int i, j, half;

for (i = 0; s[i] != '\0'; i++)
{
}

if (i % 2 == 0)
{
	half = i / 2;
}
else
	half = (i - 1) / 2;
}
for (j = half; j < i; j++)
{
	_putchar(s[j]);
}
_putchar('\n');
}

