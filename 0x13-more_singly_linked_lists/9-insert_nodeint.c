#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert nodes at the index given.
 * @head: first position of nodes
 * @idx: position to insert the new node
 * @n: value to save
 * Return: newnode.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *newnode;

	if (!head || !*head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		tmp = *head;
		while (--idx)
		{
			tmp = tmp->next;
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
	}
return (newnode);
}
