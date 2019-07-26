#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 * get_op_func - program that selects the correct
 * function to perform the operation asked
 *
 * @s: is the operator passed as an argument to the program
 *
 * Return: calls a pointer from structs and returns the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;


	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	

	i = 0;
	while (ops[i].op && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	
	return (ops[i].f);
}
