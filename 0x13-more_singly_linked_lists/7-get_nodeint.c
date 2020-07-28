#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - prints index node.
 * @head: first node
 * @index: position to print
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index--)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
return (head);
}
