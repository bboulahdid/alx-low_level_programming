#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to check
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? 1 : 0);
}

