#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;

/* Check if the list is empty or has only one node */
if (head == NULL || head->next == NULL)
return (NULL);

/* Move the tortoise one step and the hare two steps at a time */
tortoise = tortoise->next;
hare = hare->next->next;

/* Find the meeting point of the tortoise and hare */
while (hare != NULL && hare->next != NULL)
{
if (tortoise == hare)
break;

tortoise = tortoise->next;
hare = hare->next->next;
}

/* If the hare reached the end, there is no loop */
if (hare == NULL || hare->next == NULL)
return (NULL);

/* Move the tortoise back to the head and keep the hare at the meeting point */
tortoise = head;

/* Move both pointers at the same pace until they meet again at the loop start */
while (tortoise != hare)
{
        tortoise = tortoise->next;
hare = hare->next;
}

return (tortoise);
}
