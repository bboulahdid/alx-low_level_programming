#include "main.h"

/**
 * _islower - Check if a letter is lowercase
 * @c: char to check
 *
 * Return: 1 if the character is lower, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}

