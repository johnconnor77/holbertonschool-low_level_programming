#include <stdio.h>
#include "holberton.h"
/**
 *print_array - print each element of an array
 *@a: array of int
 *@n: size of array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
{
	printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}

