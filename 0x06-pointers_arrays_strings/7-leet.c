#include "main.h"

/**
 * leet - encodes a string
 * (a or A -> 4)
 * (e or E -> 3)
 * (o or O -> 0)
 * (t or T -> 7)
 * (l or L -> 1)
 *
 * @s: the string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, j;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}

	return (s);
}

