#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - a pointer to the function that corresponds
 * to the operator given as a parameter
 *
 * @s: the operator passed as argument
 *
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && ops[i].op[0] != s[0])
		i++;

	return (ops[i].f);
}

