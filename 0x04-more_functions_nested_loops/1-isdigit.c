#include "holberton.h"
/**
 *isdigit -function that checks if c is digit 0 to 9
 *@c:inpult variable
 *Return:1 is digit otherwise 0
 */
int _isdigit(int c)
{
int val;
c ='0'- c;
if (c >= 0 && c <= 9)
{
	val = 1;
}
else
{
	val = 0;
}
return (val);
}

