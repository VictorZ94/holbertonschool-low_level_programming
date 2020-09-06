#include "lists.h"

/**
 * get_dnodeint_at_index - copy node index and put it at the end.
 * @head: Pointer at top of the nodes
 * @index: index to copy
 * Return: pointer a New node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *NewNode;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
		return (NULL);

	current = head;
	while (index--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	NewNode->n = current->n;
	while (current->next != NULL)
		current = current->next;

	NewNode->next = current->next;
	current->next = NewNode;
	NewNode->prev = current;
	return (NewNode);
}
