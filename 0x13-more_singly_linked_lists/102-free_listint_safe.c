#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe -Function that frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
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
exit(98);
}

current = next;
}

*h = NULL;
return (count);
}
