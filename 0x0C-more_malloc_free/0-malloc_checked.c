#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked -  function that allocates memory using malloc
 *@b: size for allocating pointer
 *Return: k pointer allocated with b
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98); /* status value if malloc fails */

return (p);
}

