#include"holberton.h"
/**
 *_memset-function that fill memory with a constant byte
 *@s: string to replace
 *@b: constant value
 *@n: amount of bytes for replacing
 *Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
