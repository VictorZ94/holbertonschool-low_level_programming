#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new struct my dog doggy
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
	{
		return (NULL);
	}
	i = 0;
	while (name[i])
		i++;

	doggy->name = malloc(sizeof(char) * (i + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for (j = 0; j < i; j++)
		doggy->name[j] = name[j];

	i = 0;
	while (owner[i])
		i++;

	doggy->owner = malloc(sizeof(char) * (i + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		doggy->owner = owner;

	doggy->age = age;
	return (doggy);
}
