#include"holberton.h"
/**
 *_strchr -function that fill memory with a constant byte
 *@s: string inlet
 *@c: char coincidence
 *Return: s
**/
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
	if (*s == c)
	{
		break;
	}
s++;
}
return (s);
}
