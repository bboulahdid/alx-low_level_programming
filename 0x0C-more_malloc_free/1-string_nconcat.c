#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the 1st string
 * @s2: the 2nd string
 * @n: number of bytes to copy from the 2nd string
 *
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_ptr;
	unsigned int s2_len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s2_len = strlen(s2);
	if (n >= s2_len)
		n = s2_len;

	concat_ptr = malloc(sizeof(*concat_ptr) + (strlen(s1) + n));

	if (concat_ptr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat_ptr[i] = s1[i];

		for (j = 0; j < n; j++)
			concat_ptr[i + j] = s2[j];

		concat_ptr[i + j] = '\0';
	}

	return (concat_ptr);
}

