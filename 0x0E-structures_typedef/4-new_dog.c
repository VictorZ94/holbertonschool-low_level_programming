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

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
