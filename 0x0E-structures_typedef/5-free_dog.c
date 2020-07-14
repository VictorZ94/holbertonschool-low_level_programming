#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Memory freed
 * @d: dog's name
 *
 * Return: Pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
	}
free(d);
}
