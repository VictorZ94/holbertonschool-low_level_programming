#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - separe memory in another address
 * @b: Number to do cast
 * 
 * Return: Pointer to any data type
 * 
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);

return (p);
}
