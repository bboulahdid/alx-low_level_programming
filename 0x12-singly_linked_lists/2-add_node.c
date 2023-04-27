#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the 1st node in the singly linked list
 * @str: the node's value
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *node = malloc(sizeof(list_t));
	int i = 0;

	if (str == NULL || new_str == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}

	/* calcule str's length */
	while (str[i] != '\0')
		i++;

	node->str = new_str;
	node->len = i;
	node->next = *head;

	*head = node;

	return (node);
}

