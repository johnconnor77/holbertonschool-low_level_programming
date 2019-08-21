#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function that converts
 * a string of binary into integers
 * @b: string input
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, suma = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		for (i = 0; b[i]; i++)
		{

		if (b[i] == '1')
		{
			suma = (suma << 1) | 1;
		}
		else if (b[i] == '0')
		{
			suma = suma << 1;
		}
		else
		{
			return (0);
		}

		}
	}
	return (suma);
}
