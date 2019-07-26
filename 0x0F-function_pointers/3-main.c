#include "3-calc.h"
/**
 * main - entry point
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i; /* num1 */
	int j; /* num2 */
	int calc;
	int (*p)(int, int); /* Function pointer match with calculation process */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = (get_op_func(argv[2]));

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && (j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = p(i, j);

	printf("%d\n", calc);

	return (0);
}
