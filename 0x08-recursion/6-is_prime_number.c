#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: the number check
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_prime_helper(n, 5));
}

/**
 * is_prime_helper - checks if a number is a prime number
 *
 * @n: the number check
 * @divisor: a divisor
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor == n / 2)
		return (1);

	return (is_prime_helper(n, divisor + 1));
}

