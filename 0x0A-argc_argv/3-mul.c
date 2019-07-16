#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two arguments converted from char 2 in
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	}
	printf ("Error\n");
	return (1);
}
