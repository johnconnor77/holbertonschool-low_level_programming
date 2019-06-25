#include "holberton.h"
/**
 * int_abs - Absolute value for any integer.
 * @n: input value for checking restrictions
 * Return: 0,1, -1
 */
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

