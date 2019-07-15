#include "holberton.h"
/**
 * _abs - Absolute value for any integer.
 * @n: input value for checking restrictions
 * Return: Absolute value
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

