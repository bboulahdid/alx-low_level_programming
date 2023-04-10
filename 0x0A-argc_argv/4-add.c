#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - check if a string is number
 *
 * @s: the string to check
 *
 * Return: 1 if is number, 0 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - prints the addition of positive numbers
 *
 * @argc: The # of arguments
 * @argv: An array of arguments
 *
 * Return: the sum of all args or 1 if an arg is not a number
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if ((argc - 1) == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 1)
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", result);

	return (0);
}

