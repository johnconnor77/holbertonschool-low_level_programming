#include "holberton.h"
/**
 * print_alphabet_x10 - from a to z ten times .
 *
 * void.
 */
void print_alphabet_x10(void)
{
char alpha;
int n;

for (n = 1; n <= 10; ++n)
{
	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		_putchar(alpha);
	}
_putchar('\n');
}
return;
}
