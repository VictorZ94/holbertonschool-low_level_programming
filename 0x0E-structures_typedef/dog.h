#ifndef MY_STRUCT_H
#define MY_STRUCT_H
/**
 * struct dog - structure defined to set my dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: features of my dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* ifndef MY_STRUCT_H   */
