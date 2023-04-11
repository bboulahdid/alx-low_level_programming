#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: # of rows
 * @height: # of columns
 *
 * Return: the 2 dimensional array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **two_dim_arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim_arr = malloc(sizeof(int *) * height);

	if (two_dim_arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			two_dim_arr[i] = malloc(sizeof(int) * width);

			if (two_dim_arr[i] == NULL)
			{
				while (i >= 0)
				{
					free(two_dim_arr[i--]);
				}

				free(two_dim_arr);
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
					two_dim_arr[i][j] = 0;
			}
		}
	}

	return (two_dim_arr);
}

