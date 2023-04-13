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
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat_ptr = malloc(sizeof(*concat_ptr) + (n + strlen(s1) + 1));

	if (concat_ptr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat_ptr[j++] = s1[i];

		for (i = 0; s2[i] != '\0' && i < n; i++)
			concat_ptr[j++] = s2[i];

		concat_ptr[j] = '\0';
	}

	return (concat_ptr);
}

