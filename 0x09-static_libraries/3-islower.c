#include "holberton.h"
/**
 * _islower - check on lowercase values.
 * @c: input value for checking restrictions
 * Return: 0 or 1
 */
int _islower(int c)
{
int val;
if (c >= 97 && c <= 122)
{
	val = 1;
}
else
{
	val = 0;
}
return (val);
}
