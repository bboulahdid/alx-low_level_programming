#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: the string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		/* check if first char or the previous char is */
		/* (`,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{` or `}`) */
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i] == ' ' ||
																				 s[i] == '\t' ||
																				 s[i] == '\n' ||
																				 s[i] == ',' ||
																				 s[i] == ';' ||
																				 s[i] == '.' ||
																				 s[i] == '!' ||
																				 s[i] == '?' ||
																				 s[i] == '"' ||
																				 s[i] == '(' ||
																				 s[i] == ')' ||
																				 s[i] == '{' ||
																				 s[i] == '}'))
			s[i] -= 32;

		i++;
	}

	return (s);
}

