#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * @argc: the number of args
 * @argv: the array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	op_func = get_op_func(operator);

	if (op_func == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}

