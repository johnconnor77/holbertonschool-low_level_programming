#include "holberton.h"

/**
 * leet -function that encodes a string into 1337
 * @s: string input
 * Return: s
*/

char *leet(char *s)
{
	char  *a = "aAeEoOtTlL", *b = "4433007711";
	int i, j;

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

