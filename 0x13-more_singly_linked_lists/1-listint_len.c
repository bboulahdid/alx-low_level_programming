#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: first node in the singly linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}

