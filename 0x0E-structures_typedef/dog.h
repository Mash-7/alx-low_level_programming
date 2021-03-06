#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Describes dogs.
 * @name: Name of the dog.
 * @age: Age of the dog
 * @owner: The dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
