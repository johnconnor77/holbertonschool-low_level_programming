#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all worlds of a string
 * @s: string input
 * Return: 0
 */

char *cap_string(char *s)
{
	int i;
	int j;
	int sep[14] = {' ', '\t', '\n', ',', ';', '.',
			 '!', '?', '"', '(', ')', '{', '}', '\0'};
	printf("%d\n", s[6]);
	printf("%d\n", sep[1]);
	if (sep[1] == s[6])
		printf("CIERTO");
	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	while (s[i] != '\0')
	{
	j=0;
		while (sep[j] != '\0')
		{
			if (sep[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		j++;
		}
	i++;
	}
return (s);
}
