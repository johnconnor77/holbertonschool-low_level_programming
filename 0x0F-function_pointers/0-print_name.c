#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: output that points to function have been passed and
 * takes a char* and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
