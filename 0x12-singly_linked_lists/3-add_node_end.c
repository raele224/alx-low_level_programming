#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end -Code that adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer to the head of the list.
 * @str: The string to be duplicated and added as the new node's str.
 * Return: The address of the new element, or NULL if it's error.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	}

	return (new_node);
}
