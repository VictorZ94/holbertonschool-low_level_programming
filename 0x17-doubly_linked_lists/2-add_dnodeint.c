#include "lists.h"

/**
 * add_dnodeint - add node at beginning of the nodes.
 * @head: Pointer at top of the nodes
 * @n: Number that contains the node
 * Return: Pointer to a new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	if ((*head) != NULL)
		(*head)->prev = NewNode;
	NewNode->next = *head;
	NewNode->prev = NULL;
	*head = NewNode;

	return (NewNode);
}
