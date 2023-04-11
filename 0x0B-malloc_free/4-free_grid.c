#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: the 2 dim. array to free
 * @height: # of columns
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

