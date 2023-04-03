#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: the memory area dest
 * @src: the memory area src
 * @n: the # of bytes to to copy
 *
 * Return: updated memory are (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

