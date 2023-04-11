#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_size, s2_size, i, new_str_idx = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_size = strlen(s1);
	s2_size = strlen(s2);

	concat_str = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (concat_str != NULL)
	{
		for (i = 0; i < s1_size; i++)
			concat_str[new_str_idx++] = s1[i];

		for (i = 0; i < s2_size; i++)
			concat_str[new_str_idx++] = s2[i];
	}

	return (concat_str);
}

