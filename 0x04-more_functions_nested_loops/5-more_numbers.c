#include "holberton.h"
/**
 *more_numbers -prints digits 0 to 14, 10 times
 *
 *Return:void
 */
void more_numbers(void)
{
int num, times, div, n;

for (times = 1; times <= 10; times++)
{
	for (num = 0; num <= 14; num++)
	{
	div = num / 10;
	if (num >= 0 && num <= 9)
	{
	n = 1;
	}
	else if (num >= 10 && num <= 14)
	{
	n = 10;
	}
	_putchar(num / n + '0');
		if (div != 0)
		{
		_putchar(num % 10 + '0');
		}

	}

	_putchar('\n');
}
return;
}

