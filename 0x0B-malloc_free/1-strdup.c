#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the array's size
 *
 * Return: the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *str_dup;
	int str_size, i;

	if (str == NULL)
		return (NULL);

	str_size = strlen(str);
	str_dup = malloc(sizeof(char) * (str_size + 1));

	if (str_dup != NULL)
	{
		for (i = 0; i < str_size; i++)
			str_dup[i] = str[i];
	}

	return (str_dup);
}

