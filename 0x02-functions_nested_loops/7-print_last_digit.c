#include "holberton.h"
/**
 * print_last_digit - last digit for any integer.
 * _abs - Absolute value for any integer
 * @m: input value print_last_digit number
 * @n: input value abs
 * Return: Absolute value
 */
int print_last_digit(int m)
{
int ld;
ld = m % 10;
ld = _abs(ld);
_putchar(ld + '0');
return (ld);
}
int _abs(int n)
{
int val;
if (n >= 0)
{
	val = n;
}
else
{
	val = -1 * n;
}
return (val);
}

