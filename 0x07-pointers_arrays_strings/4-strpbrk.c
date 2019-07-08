#include"holberton.h"
/**
 *_strpbrk -function that searches a string for any of a set of bytes
 *@s: string inlet
 *@accept: match statement string
 *Return: s
**/
char *_strpbrk(char *s, char *accept)
{
int i, flag;

flag = 0;
while (*s != '\0')
{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			flag = 1;
			break;
		}
	}
if (flag == 1)
{
	break;
}
s++;
}
return (s);
}
