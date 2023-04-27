#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: the 1st node in the singly linked list
 * @str: the node's value
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *node = malloc(sizeof(list_t));
	int i = 0;
	list_t *tmp_node;

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

	if (*head == NULL)
		*head = node;
	else
	{
		tmp_node = *head;

		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;

		tmp_node->next = node;
	}

	return (node);
}

