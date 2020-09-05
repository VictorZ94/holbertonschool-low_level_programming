#include "lists.h"

/**
 * sum_dlistint - sum all nodes data int.
 * @head: Pointer at top of the nodes
 * Return: adds
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (!head)
		return (0);

	current = head;
	while (current->next != NULL)
		current = current->next;

	while (current != NULL)
	{
		sum += current->n;
		if (current != NULL)
			current = current->prev;
	}
	return (sum);
}
