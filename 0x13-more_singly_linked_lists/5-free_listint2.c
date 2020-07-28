#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list int doble pointer.
 * @head: nodes
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
*head = NULL;
}
