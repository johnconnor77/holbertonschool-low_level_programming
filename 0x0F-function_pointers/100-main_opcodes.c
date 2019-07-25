#include <stdio.h>
#include <stdlib.h>
/**
*main - program that prints the opcodes of its own main function
*@argc: arguments counter
*@argv: arguments vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
