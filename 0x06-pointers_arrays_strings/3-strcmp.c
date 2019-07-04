#include"holberton.h"
/**
 *_strcmp -function that compares 2 strings.
 *@s1: input string
 *@s2: input string
 *Return: diff from strings following ASCII
*/
int _strcmp(char *s1, char *s2)
{
int dif;
dif = *s1 - *s2;

return (dif);
}
/**
 *_strlen - function that calculate the lenght
 * of the input string
 *@s: string input
 *Return: lenght of string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}

