#include "lists.h"

/**
 * free_dlistint - freed memory allocation.
 * @head: Pointer at top of the nodes
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
