#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: the string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_encryption =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot13_encryption[j];
				break;
			}
			j++;
		}

		i++;
	}

	return (s);
}

