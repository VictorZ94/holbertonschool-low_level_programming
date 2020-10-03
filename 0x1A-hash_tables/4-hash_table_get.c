#include "hash_tables.h"

/**
 * hash_table_get - add key and value to an index.
 * @ht: pointer's array to save linked list
 * @key: key to look up index
 *
 * Return: On success 1 on error 0.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;


	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if ((strcmp(ht->array[index]->key, key)) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
