#include "variadic_functions.h"
/**
 * sum_them_all - function that return the sum of all its parameters
 * @n: value
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(vlist, n); %

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);
	return (sum);
}
