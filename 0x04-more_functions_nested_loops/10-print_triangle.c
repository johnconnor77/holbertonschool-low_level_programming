#include "holberton.h"
/**
 *print_triangle - prints triangle at long size n
 *@size:input size of triangel
 *Return:void
 */
void print_triangle(int size)
{
int i, j, n, k;
n = size;

if (n <= 0)
{
_putchar('\n');
}
else
{
k = n;
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= k)
			{
			_putchar(35);
			}
			else
			{
			_putchar(' ');
			}
		}
	k = k - 1;
	_putchar('\n');
	}
}

return;
}

