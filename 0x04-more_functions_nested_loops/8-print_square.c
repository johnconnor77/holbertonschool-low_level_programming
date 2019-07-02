#include "holberton.h"
/**
 *print_square - prints square at long size n
 *@size:input size of square
 *Return:void
 */
void print_square(int size)
{
int i, j, n;
n = size;

if (n <= 0)
{
	_putchar('\n');
}
else
{

	for (j = 1; j <= n; j++)
	{

		for (i = 1; i <= n; i++)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
}
return;
}

