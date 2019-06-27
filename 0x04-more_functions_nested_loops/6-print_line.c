#include "holberton.h"
/**
 *print_line -prints line to long of size n
 *@n:input size of line
 *Return:void
 */
void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
	_putchar('_');

}
_putchar('\n');

return;
}

