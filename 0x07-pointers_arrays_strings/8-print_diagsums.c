#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: a multi-dim. array
 * @size: the 1st dim. array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, left_to_right_diag_sum = 0, right_to_left_diag_sum = 0;
	int matrix_size = size * size;

	for (i = 0; i < matrix_size; i += (size + 1))
		left_to_right_diag_sum += a[i];

	for (j = size - 1; j <= (matrix_size - size); j += (size - 1))
		right_to_left_diag_sum += a[j];

	printf("%d, %d\n", left_to_right_diag_sum, right_to_left_diag_sum);
}

