#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: for each number output
 * @n: amount of values
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int num;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arglist, int);
		printf("%d", num);

		if (separator != NULL)
		{
			if (i < (n - 1))  /* till the n-1 num  print the last separator */
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arglist);
}
