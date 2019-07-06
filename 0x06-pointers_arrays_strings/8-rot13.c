#include "holberton.h"
/**
 * rot13 -function that encodes a string into rot13
 * @s: string input
 * Return: s
*/

char *rot13(char *s)
{
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM\0";
	auto int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
				break;
			}
		j++;
		}
	i++;
	}
return (s);
}

