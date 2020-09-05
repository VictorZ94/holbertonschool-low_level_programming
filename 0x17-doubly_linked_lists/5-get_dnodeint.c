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
	dlistint_t *temp;
	dlistint_t *current;

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
	NewNode->prev = NULL;
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;

	NewNode->next = temp->next;
	temp->next = NewNode;
	NewNode->prev = temp;
	return (NewNode);
}
