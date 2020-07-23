#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node at beginning of the node
 * @head: head of nodes with reference to the previous node
 * @str: New name to save in node
 *
 * Return: a pointer a new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

	while (str[i])
		i++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

return (newnode);
}
