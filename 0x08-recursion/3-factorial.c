#include "holberton.h"

/**
 * factorial -function that returns the factorial of a given number
 * @n: int inlet
 * Return: factorial of a number
 */

int factorial(int n)
{
	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
