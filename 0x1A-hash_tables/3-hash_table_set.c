#include "hash_tables.h"

/**
 * hash_table_set - add key and value to an index.
 * @ht: pointer's array to save linked list
 * @key: key to look up index
 * @value: value's key
 *
 * Return: On success 1 on error 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	if (!key || !value || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	if (!ht || !(ht->array) || ht->size == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != 0)
	{
		if ((strcmp(ht->array[index]->key, key)) == 0)
		{
			free((ht->array[index])->value);
			(ht->array[index])->value = strdup(value);
			return (1);
		}
		else
			add_node(&(ht->array[index]), key, value);
	}
	else
		add_node(&(ht->array[index]), key, value);
	return (1);
}

/**
 * add_node - add node at beginning of the node
 * @head: head of nodes with reference to the previous node
 * @key: New name to save in node
 * @value: New value to save in node
 *
 * Return: a pointer a new node.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (NULL);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
