#include "holberton.h"
/**
 *print_diagonal -prints diagonal at long size n
 *@n:input size of diagonal
 *Return:void
 */
void print_diagonal(int n)
{
int i, j, k;
k = 0;
if (n <= 0)
{
	_putchar('\n');
}
else
{

	for (j = 1; j <= n; j++)
	{

		if (j > 1)
		{
		for (i = 1; i <= k; i++)
		{
		_putchar(' ');
		}
		}
	k = k + 1;
	_putchar(92);
	_putchar('\n');
	if (k == n)
		break;
	}
}
return;
}

