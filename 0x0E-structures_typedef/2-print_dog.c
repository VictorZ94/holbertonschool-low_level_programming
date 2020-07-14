#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialize a struct
 * @d: entire struct
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name %s\n", (*d).name);
		printf("Age %f\n", (*d).age);
		printf("Owner %s\n", (*d).owner);
	}
}
