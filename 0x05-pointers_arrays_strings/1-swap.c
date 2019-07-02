#include "holberton.h"

/**
 * swap_int - swap the values of two int
 * @a: input 1
 * @b: input 2
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
