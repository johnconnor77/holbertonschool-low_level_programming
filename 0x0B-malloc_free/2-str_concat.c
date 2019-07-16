#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @s1: output with original content of s1 and & with s2
 * @s2: string for concatenate
 * Return: s1 output from s1 + s2
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc(i + j);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';
return (s);
}

