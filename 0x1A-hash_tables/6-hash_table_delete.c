#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: head
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *AuxNode;

	if (!ht || !ht->array)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i]; /*  is the same to *head */
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			AuxNode = tmp->next;
			free(tmp);
			tmp = AuxNode;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
