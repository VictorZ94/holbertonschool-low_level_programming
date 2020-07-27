#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints list of linked list of integers.
 * @h: List or arguments
 *
 * Return: Numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
