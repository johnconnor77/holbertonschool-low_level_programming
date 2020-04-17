#include "search_algos.h"
/**
 * linear_search - function that searches
 * for a value in an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: first index where value is located, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
