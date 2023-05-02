#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the first node in the singly linked list
 * @index: the index of the node in the singly linked list
 *
 * Return: the node at the provided index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
	}

	return (node);
}

