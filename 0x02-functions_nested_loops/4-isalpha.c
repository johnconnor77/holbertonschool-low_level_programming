#include "holberton.h"
/**
 * _isalpha - check on alphabet values.
 * @c: input value for checking restrictions
 * Return: 0 or 1
 */
int _isalpha(int c)
{
int val;
if (c >= 97 && c <= 122)
{
	val = 1;
}
else if (c >= 65 && c <= 90)
{
	val = 1;
}
else
{
	val = 0;
}
return (val);
}
