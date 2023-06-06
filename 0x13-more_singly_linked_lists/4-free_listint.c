#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Code that Frees a listint_t list.
 * @head: Pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
	next_node = current->next;
	free(current);
	current = next_node;
	}
}
