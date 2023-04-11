#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all the program's arguments
 *
 * @ac: # of args
 * @av: the array of args
 *
 * Return: all the program's arguments, or NUMM if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, arg_len, allocated_size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		allocated_size += strlen(av[i]);

	str = malloc(sizeof(char) * (allocated_size + ac + 1));

	if (str != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			arg_len = strlen(av[i]);

			for (j = 0; j < arg_len; j++)
				str[k++] = av[i][j];

			str[k++] = '\n';
		}
	}

	return (str);
}

