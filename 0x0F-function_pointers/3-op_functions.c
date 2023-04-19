#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 *
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 *
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 *
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of the division of a by b
 *
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of a by b
 *
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

