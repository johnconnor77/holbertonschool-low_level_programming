#include "holberton.h"
/**
 * times_table - print the products between number from 0 to 9
 * Return: void
 */
void times_table(void)
{
int m, n, p;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 9; ++n)
		{
			p = m * n;
			if (m == 0)
			{
				_putchar(p + '0');
				if (n == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (n == 0)
			{
				putchar(p + '0');
			}
			else if (p <= 9 && n > 0)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (p + '0');
			}
			else if (p > 9)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (p / 10 + '0');
				_putchar (p % 10 + '0');
			}
		}
		_putchar ('\n');
	}
return;
}

