#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: a char pointer
 * Return: the length of the string pointed to by @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}

