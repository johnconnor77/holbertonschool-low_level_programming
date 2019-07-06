#include "holberton.h"

/**
 * rot13 -function that encodes a string into rot13
 * @s: string input
 * Return: s
*/

char *rot13(char *s)
{
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		j++;
		}
	i++;
	}
	return (s);
}

