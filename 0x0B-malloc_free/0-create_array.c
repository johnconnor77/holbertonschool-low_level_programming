#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input size of array
 * @c: input char for initializing
 * Return: s output char with C initialized
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * (sizeof(char))) ;
		
	if ( size ==  0 || s == NULL )
		return(NULL);

	i = 0;
	while (i <= size)
	{
		s[i] = c;
		i++;
	}

	return(s);
}

