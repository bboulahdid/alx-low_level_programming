#include "main.h"

/**
 * is_special_char - check if the provided character is speacial
 * (`,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{` or `}`)
 *
 * @c: the character to check
 *
 * Return: 1 if the character is special, 0 otherwise
 */
int is_special_char(char c)
{
	if (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == ',' ||
			c == ';' ||
			c == '.' ||
			c == '!' ||
			c == '?' ||
			c == '"' ||
			c == '(' ||
			c == ')' ||
			c == '{' ||
			c == '}')
		return (1);
	return (0);
}

/**
 * is_lower - check if the provided character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int is_lower(c)
{
	return (c >= 'a' && c <= 'z');
}

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

	if (is_lower(s[0]))
		s[0] -= 32;

	while (s[i] != '\0')
	{
		/* check if first char or the previous char is */
		/* (`,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{` or `}`) */
		if (is_lower(s[i]) && is_special_char(s[i - 1]) == 1)
			s[i] -= 32;

		i++;
	}

	return (s);
}

