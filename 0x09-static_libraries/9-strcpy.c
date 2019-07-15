#include "holberton.h"
/**
 *_strcpy - put a string pointer into other one
 *Result: dest
 *@dest:string inlet
 *@src: string outlet
 *Return: value depending on function
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
for (i = 0; src[i] != '\0'; i++)
{
}
for (j = 0; j < i; j++)
{
	dest[j] = src[j];
}
dest[i] = src[i];

	return (dest);
}
