#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the memory area to fill
 * @b: the constant byte
 * @n: the # of bytes to fill
 *
 * Return: updated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

