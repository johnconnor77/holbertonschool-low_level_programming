#include <stdio.h>
/**
 * main - program that prints the number of arguments
 * @argc: argument count
 * @argv: arguments vestor
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
