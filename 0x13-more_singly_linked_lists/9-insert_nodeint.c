#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the @ of the first node in the singly linked list
 * @idx: the index where to add the new node
 * @n: the new node's value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	for (i = 1; i < idx; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}

