#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - Function that frees a listint_t linked list.
 * @h: Double pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next = NULL;
	size_t count = 0;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	count++;

	/* Check if the next node points back to a previous node */
	if (next >= current)
	{
	*h = NULL;
	fprintf(stderr, "Error: loop detected in the list\n");
	exit(98);
	}

	current = next;
	}

	*h = NULL;
	return (count);
}
