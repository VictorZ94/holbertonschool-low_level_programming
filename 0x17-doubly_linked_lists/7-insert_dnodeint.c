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

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
		return (NULL);

	(*NewNode).n = n;
	if (idx == 0)
	{
		(*NewNode).next = *h;
		(*NewNode).prev = NULL;
		*h = NewNode;
	}
	else
	{
		current = *h;
		while (--idx)
		{
			current = (*current).next;
			if (!current)
				return (NULL);
		}
		(*NewNode).next = (*current).next;
		(*NewNode).prev = current;
		(*current).next = NewNode;
	}
	return (NewNode);
}
