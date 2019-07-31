#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separates values with a comma
 * @n: values
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *string;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arglist, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < (n - 1) && separator != NULL)
			/* till the n-1 char print the separator*/
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}

