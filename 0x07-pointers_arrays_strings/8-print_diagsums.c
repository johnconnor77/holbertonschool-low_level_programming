#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums -function that print the sums diagonals
 *of a matrix converted into a pointer
 *@a: matrix conversion
 *@size: size of matrix before being converted into a pointer
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	int diagder =  0, diagizq = 0;
	int auxder = size + 1, auxizq = size - 1;

	for (i = 0, j = 1; i < size  ; i++, j++)
	{
		diagder = diagder + a[i * auxder];
		diagizq = diagizq + a[j * auxizq];
	}
printf("%d, %d\n", diagder, diagizq);
}

