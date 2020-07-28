#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Linked list
 *
 * Return: reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *nxt;

	if (head)
	{
		current = *head;
		prev = NULL;

		while (current)
		{
			nxt = current->next;
			current->next = prev;
			prev = current;
			current = nxt;
		}
		*head = prev;
	}
return (*head);
}
