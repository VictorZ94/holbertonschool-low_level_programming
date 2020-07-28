#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at the index given.
 * @head: first position of nodes
 * @index: position to insert the new node
 *
 * Return: newnode.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *deletenode;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (--index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	deletenode = current->next;
	current->next = deletenode->next;
	free(deletenode);
	return (1);
}
