#include "holberton.h"
/**
 * print_sign - check on sign for each int value.
 * @n: input value for checking restrictions
 * Return: 0,1, -1
 */
int print_sign(int n)
{
int val;
if (n > 0)
{
	_putchar(43);
	val = 1;
}
else if (n == 0)
{
	_putchar(48);
	val = 0;
}
else
{	_putchar(45);
	val = -1;
}
return (val);
}
