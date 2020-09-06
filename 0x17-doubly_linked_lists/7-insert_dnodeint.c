#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at the index.
 * @h: Pointer at top of the nodes
 * @idx: position to add
 * @n: data value node
 * Return: pointer a New node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NewNode;
	dlistint_t *current;

	if (!*h || !h)
		return (NULL);

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
		return (NULL);

	(*NewNode).n = n;
	if (idx == 0)
	{
		(*NewNode).next = *h;
		if (*h)
			(*h)->prev = NewNode;
		(*NewNode).prev = NULL;
		*h = NewNode;
		return (NewNode);
	}
	current = *h;
	while (--idx)
	{
		current = (*current).next;
		if (!current)
			return (NULL);
	}
	(*NewNode).next = (*current).next;
	(*NewNode).prev = current;
	if ((*current).next)
		(*current).next->prev = NewNode;
	(*current).next = NewNode;
	return (NewNode);
}
