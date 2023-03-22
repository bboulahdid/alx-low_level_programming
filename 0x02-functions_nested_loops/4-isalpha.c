#include "main.h"

/**
 * _isalpha - Check if a char is alphabet
 * @c: char to check
 *
 * Return: 1 if the character is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}

