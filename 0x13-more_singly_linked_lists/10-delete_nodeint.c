#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -Function that deletes the node
 *  at a given index in a listint_t linked list.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	prev = NULL;
	current = *head;

	for (i = 0; i < index && current != NULL; i++)
	{
	prev = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
