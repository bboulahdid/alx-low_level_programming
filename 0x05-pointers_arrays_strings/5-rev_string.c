#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i, idx;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		idx = length - i - 1;
		temp = s[i];
		s[i] = s[idx];
		s[idx] = temp;
	}
}

