#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: the first node in the singly linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}

