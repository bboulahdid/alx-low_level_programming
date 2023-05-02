#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given position
 *
 * @head: a pointer to the @ of the first node in the singly linked list
 * @index: the index where to find the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *curr_node = *head;

	if (curr_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (curr_node->next == NULL)
			return (-1);

		curr_node = curr_node->next;
	}

	tmp = curr_node->next;
	curr_node->next = tmp->next;
	free(tmp);

	return (1);
}

