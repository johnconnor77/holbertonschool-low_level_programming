#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: s output char with concatenated arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, m;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		k++;
		}
	k++;
	}

	s = malloc(sizeof(char) * (k + 1));
	if (s == NULL)
		return (NULL);

	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{

		s[m] = av[i][j];
		m++;
		}
	s[m] = '\n';
	m++;
	}
s[m] = '\0';
return (s);
}

