#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes in the singly linked list h
 */
size_t list_len(const list_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}

