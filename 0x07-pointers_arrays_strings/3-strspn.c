#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to be searched
 * @accept: the matched string
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, matches_size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches_size++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (matches_size);
			}
		}
	}

	return (matches_size);
}

