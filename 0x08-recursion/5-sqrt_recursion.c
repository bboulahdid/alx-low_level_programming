#include "main.h"

int sqrt_helper(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to calculate the natural square root of
 *
 * Return: the natural square root of a number or -1 if not possible
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - looks for the square root of a number
 *
 * @n: the number to calculate the natural square root of
 * @root: The potential square root
 *
 * Return: the natural square root of a number or -1 if not possible
 */
int sqrt_helper(int n, int root)
{
	int root_squared = root * root;

	if (root_squared > n)
		return (-1);

	if (root_squared == n)
		return (root);

	return (sqrt_helper(n, ++root));
}

