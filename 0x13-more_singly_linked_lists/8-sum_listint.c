#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: the first node in the singly linked list
 *
 * Return: the sum of all values in the singly linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

