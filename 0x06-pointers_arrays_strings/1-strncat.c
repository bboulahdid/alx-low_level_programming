#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes to add to dest
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0, i = 0;

	while (dest[dest_length])
		dest_length++;

	while (src[i] && i < n)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}

	return (dest);
}

