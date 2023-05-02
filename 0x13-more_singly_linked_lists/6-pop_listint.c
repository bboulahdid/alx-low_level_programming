#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: a pointer to the @ of the first node in the singly linked list
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int head_value;

	if (*head == NULL)
		return (0);

	head_value = (*head)->n;

	tmp_node = *head;
	*head = (*head)->next;
	free(tmp_node);

	return (head_value);
}

