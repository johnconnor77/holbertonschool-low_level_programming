#include"holberton.h"
/**
 *_strncat -function that appends the src string
 *to the dest string, overwriting null byte.
 *@src: string that join dest
 *@dest: output from function
 *@n:size of bytes to print
 *Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
int leng, i;

leng = _strlen(dest);

for (i = 0; (i < n && src[i] != '\0'); i++)
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
auto int i;
for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}

