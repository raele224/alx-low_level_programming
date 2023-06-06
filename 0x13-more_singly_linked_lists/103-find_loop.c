#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;

if (head == NULL || head->next == NULL)
return (NULL);

tortoise = tortoise->next;
hare = hare->next->next;

while (hare != NULL && hare->next != NULL)
{
if (tortoise == hare)
break;

tortoise = tortoise->next;
hare = hare->next->next;
}

if (hare == NULL || hare->next == NULL)
return (NULL);


tortoise = head;

while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}

return (tortoise);
}
