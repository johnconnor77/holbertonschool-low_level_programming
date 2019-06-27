#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print till 98.
 * @m:input value
 * Return: void
 */
void print_to_98(int m)
{
while (m != 98)
{
	printf("%d", m);
	printf(", ");
	if (m > 98)
	{
	m--;
	}
	else if (m < 98)
	{
	m++;
	}
}
printf("%d", 98);
printf("\n");
return;
}

