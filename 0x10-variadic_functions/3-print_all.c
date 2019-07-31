#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_c - prints characters
 * @inlet: list
 */
void print_c(va_list inlet)
{
	printf("%c", va_arg(inlet, int));
}
/**
 * print_i - prints integers
 * @inlet : list
 */

void print_i(va_list inlet)
{
	printf("%d", va_arg(inlet, int));
}
/**
 * print_f - prints floating ints
 * @inlet: list
 */
void print_f(va_list inlet)
{
	printf("%f", va_arg(inlet, double));
}
/**
 * print_s - prints a string
 * @inlet: list
 */
void print_s(va_list inlet)
{
	char *str;
	/* compare actual elements that you intend to */
	str = va_arg(inlet, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all -function that prints anything
 * @format: input
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *b = ""; /* blank */
	char *cs = ", "; /* comma space */
	va_list inlet;
	pt_t types[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(inlet, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
/* fails right away with this order before going into the array */
	{
		j = 0;
		while (types[j].id != NULL)
		{
			if (format[i] == *(types[j].id))
			{
				printf("%s", b); /* examinated cases*/
				(types[j].f)(inlet);
				b = cs; /* reassign to separator */
			}
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(inlet);
}

