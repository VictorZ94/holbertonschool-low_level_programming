#include "lists.h"

/**
 * dlistint_len - return numbers of nodes.
 * @h: pointer to head
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + (dlistint_len(h->next)));
}
