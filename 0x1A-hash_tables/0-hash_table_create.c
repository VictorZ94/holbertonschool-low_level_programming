#include "hash_tables.h"
/**
 * hash_table_create - first of all create table
 * @size: size table
 *
 * Return: Pointer a Newsize
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Newsize;

	Newsize = malloc(sizeof(hash_table_t));
	if (!Newsize)
		return (NULL);

	Newsize->size = size;
	Newsize->array = calloc(Newsize->size, sizeof(hash_node_t *));
	return (Newsize);
}
