#include "main.h"

/**
 * str_size - returns a string's size
 *
 * @s: the string to calculate its size
 *
 * Return: the string's size
 */
int str_size(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_size(s + 1));
}

/**
 * is_palindrome_helper - a helper to check if a string is a palindrome
 *
 * @left: the string left pointer
 * @right: the string right pointer
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome_helper(char *left, char *right)
{
	if (left >= right)
		return (1);

	if (*left == *right)
		return (is_palindrome_helper(left + 1, right - 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	char *right = s + str_size(s) - 1;

	return (is_palindrome_helper(s, right));
}

