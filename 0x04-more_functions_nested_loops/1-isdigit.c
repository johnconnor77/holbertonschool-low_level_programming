#include "holberton.h"
/**
 *isupper -function that checks if c is uppercase
 *@c:inpult variable
 *Return:1 is uppercase otherwise 0
 */
int _isupper(char c)
{
int val;
if (c >= 'A' && c <= 'Z')
{
	val = 1;
}
else
{
	val = 0;
}
return (val);
}
