#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: the size of the array
 * @size: the size of each elements in the array
 *
 * Return: a pointer to the array's allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i, total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(total_size);

	if (arr != NULL)
	{
		for (i = 0; i < total_size; i++)
			((char *)arr)[i] = '\0';
	}

	return (arr);
}

