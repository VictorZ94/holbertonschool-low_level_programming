#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free node of linked list .
 * @head: nodes
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
free(head);
}
