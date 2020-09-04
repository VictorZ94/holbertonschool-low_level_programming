#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list of files.
 * @head: Pointer at top of the nodes
 * @n: Number that contains the node
 *
 * Return: Pointer to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode;
	dlistint_t *temp;

	NewNode = malloc(sizeof(dlistint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	if (*head == NULL)
	{
		NewNode->prev = NULL;
		NewNode->next = *head;
		*head = NewNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		NewNode->next = temp->next;
		temp->next = NewNode;
		NewNode->prev = temp;
	}
	return (NewNode);
}
