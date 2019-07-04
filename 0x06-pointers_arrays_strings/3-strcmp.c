#include"holberton.h"
#include <stdio.h>
/**
 *_strcmp -function that compares 2 strings.
 *@s1: input string
 *@s2: input string
 *Return: diff from strings following ASCII
*/
int _strcmp(char *s1, char *s2)
{
int dif;
dif = 0;

while ( *s1 != '\0' || *s2 != '\0')
{
	dif += *s1 - *s2;
	s1++;
	s2++;
}
return (dif);
}

