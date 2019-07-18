#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 *@nmemb: amount of elements
 *@size: bytes
 *Return: p pointer allocated with nmemb x size with 0 set values
 *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size) ; i++)
	{
		p[i] = '\0'; /* anologous for char set values */
	}

return ((void *)p);
}

