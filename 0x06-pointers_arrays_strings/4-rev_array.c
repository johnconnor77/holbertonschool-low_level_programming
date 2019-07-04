#include"holberton.h"
#include<stdio.h>
/**
 *reverse_array -function that reverses the content
 *of an array of integers
 *@a: array of integers
 *@n: size of array
*/
void reverse_array(int *a, int n)
{
int aux;
int i, j;
j = n - 1;
for (i = 0 ; i < j ; i++)
{
	aux = a[i];
	a[i] = a[j];
	a[j] = aux;
	j--;
}
}
