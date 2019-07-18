#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers
 *@min: start set value
 *@max: end set value
 *Return: p the newly created array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++)
	{
		p[i] = min;
		min = min + 1;
	}
return (p);
}

