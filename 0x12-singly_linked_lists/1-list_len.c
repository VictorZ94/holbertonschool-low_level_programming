#include <stdio.h>
#include "lists.h"

/**
 * list_len - print amount of nodes
 * @h: structure liked list
 *
 * Description: singly linked list node structure
 * for Holberton project
 *
 * Return: amount nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
