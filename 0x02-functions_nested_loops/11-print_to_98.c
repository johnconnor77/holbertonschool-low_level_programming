#include "holberton.h"
/**
 * print_to_98 - print till 98.
 * @m:input value
 * Return: void
 */
void print_to_98(int m)
{
while (m != 98)
{
	_putchar(m + '0');
	if (m > 98)
	{
	_putchar(m / 10  + '0');
	_putchar(m % 10 + '0');
	_putchar(',');
	_putchar(' ');
	m--;
	}
	else if (m < 98)
	{
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar(',');
	_putchar(' ');
	++m;
	}
_putchar(m + '0');
}
return;
}

