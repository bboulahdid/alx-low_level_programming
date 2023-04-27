#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: the 1st node in the singly linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head->str);
		free(head);
		head = tmp_node;
	}
}

