#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete node head
 * @head: linked list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int tmp = 0;

	if (*head == NULL)
		return (0);

	delete = *head;
	tmp = (*head)->n;
	*head = (*head)->next;
	free(delete);

return (tmp);
}
