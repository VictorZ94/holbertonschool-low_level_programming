#include "hash_tables.h"

/**
 * hash_table_print - add key and value to an index.
 * @ht: pointer's array to save linked list
 *
 * Return: On success 1 on error 0.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int x = 0;

	if (!ht)
		return;

	putchar('{');
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			x = 1;
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
