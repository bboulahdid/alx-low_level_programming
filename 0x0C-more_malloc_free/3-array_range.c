#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: the min. value (first) of the array
 * @max: the max. value (last) of the array
 *
 * Return: a pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *arr, i, total_size;

	if (min > max)
		return (NULL);

	total_size = max - min + 1;

	arr = malloc(sizeof(int) * total_size);

	if (arr != NULL)
	{
		for (i = 0; i < total_size; i++)
			arr[i] = min + i;
	}

	return (arr);
}

