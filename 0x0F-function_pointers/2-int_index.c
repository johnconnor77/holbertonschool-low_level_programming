#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if fails on pointers and size_t <=0
 * or if theres no coincidence on comparison, otherwise
 * return index of the first element for which the cmp function
 * doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)  /* check on return */
			return (i);
		i++;
	}

	return (-1);
}
