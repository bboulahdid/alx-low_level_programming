#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: the 1st string
 * @to: the string to replace with
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
