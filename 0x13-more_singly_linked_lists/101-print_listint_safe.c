#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)

	{
	printf("[%p] %d\n", (void *)current, current->n);
	count++;

	/* Check if the next node points back to a previous node */
	if (current->next >= current)
	{
	printf("-> [%p] %d\n", (void *)current->next, current->next->n);
	fprintf(stderr, "Error: loop detected in the list\n");
	exit(98);
	}

	current = current->next;
	}

	return (count);
}

