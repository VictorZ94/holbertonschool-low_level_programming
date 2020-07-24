#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of the node
 * @head: head of nodes with reference to the previous node
 * @str: New name to save in node
 *
 * Return: a pointer a new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;

	int i = 0;

	while (str[i])
		i++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}

return (newnode);
}
