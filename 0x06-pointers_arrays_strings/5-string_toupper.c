#include"holberton.h"
/**
 *string_toupper -function that changes all lowercase letters
 *of a string to uppercase.
 *@s: input pointer
 *Return: uppercase s converted
*/
char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
i++;
}
return(s);
}

