#include"holberton.h"
/**
 *_strcat -function that appends the src string
 *to the dest string, overwriting null byte.
 *@src: string that join dest
 *@dest: output from function
 *Return: dest string
*/
char *_strcat(char *dest, char *src)
{
int leng, i;

leng = _strlen(dest);
for (i = 0; src[i] != '\0'; i++)
	dest[leng + i] = src[i];
dest[leng + i] = '\0';
return (dest);
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

