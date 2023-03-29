#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: the string to turn to uppercase
 *
 * Return: the uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;
	int upper_offset = 'a' - 'A';

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= upper_offset;

		i++;
	}

	return (s);
}

