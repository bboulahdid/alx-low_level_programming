#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substringbytes
 *
 * @haystack: the string to check
 * @needle: the sub-string to look for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
				{
					k++;
					j++;
				}
				else
					break;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

