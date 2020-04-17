#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low: lower edge inside array
 * @high: higher edge inside array
 */
void print_array(const int *array, size_t low, size_t high)
{
	size_t i;

	i = low;

	printf("Searching in array: ");
	while (array && i < high)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}
/**
 * binary_search - Searches for a value in a
 * sorted array of integers using the
 * Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index of value if its unsuccessful -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;

		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			/* mid its not included */
			low = mid + 1;
		else
			high = mid - 1;
	}
return (-1);
}
