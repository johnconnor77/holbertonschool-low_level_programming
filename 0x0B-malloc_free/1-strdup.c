#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: input size of array
 * Return: s output char duplicated from str
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
		;
	s = malloc(j + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i <= j)
	{
		s[i] = str[i];
		i++;
	}
	s[i + 1] = '\0';
	return (s);
}

