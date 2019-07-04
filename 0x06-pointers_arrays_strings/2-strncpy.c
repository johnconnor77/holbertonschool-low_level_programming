#include"holberton.h"
/**
 *_strncpy -function that copies a string.
 *@src: string input
 *@dest: output from function where its replaced 
 *@n:size of bytes to print
 *Return: dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;


for (i = 0; (i < n && src[i] != '\0'); i++)
	dest[i] = src[i];

for ( ; i < n; i++)
{
dest[i] = '\0';
}

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

