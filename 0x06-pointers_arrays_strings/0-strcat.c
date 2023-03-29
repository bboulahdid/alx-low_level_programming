#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0, i = 0;

	while (dest[dest_length])
		dest_length++;

	while (src[i])
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}

	return (dest);
}
