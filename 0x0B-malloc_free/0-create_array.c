#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars & init. it with a specific char
 *
 * @size: the array's size
 * @c: the char to initialize the array with it
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}

	return (arr);
}

