#include "holberton.h"
/**
 * print_binary - function that prints
 * the binary representation of a number
 * @n: number input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 0;

	num = n & 1;  /* bitwise comparison */

	n = n >> 1;

	if (n > 0)
		print_binary(n); /* recalls function until n > 0 */

	_putchar(num + '0');

}
