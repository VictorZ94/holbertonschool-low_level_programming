#include "hash_tables.h"

/**
 * key_index - check the code for Holberton School students.
 * @key: to get index
 * @size: size of the array
 *
 * Return: Index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int save_idx;

	if (!key)
		return (0);

	if (size == 0)
		return (0);

	save_idx = hash_djb2(key) % size;
	return (save_idx);
}
