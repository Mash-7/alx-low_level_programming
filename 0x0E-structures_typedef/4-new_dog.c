#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: On success, struct dog.
 * On failure, NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	int i, nm, ow;

	pup = malloc(sizeof(*pup));
	if (pup == NULL)
		return (NULL);

	for (nm = 0; name[nm]; nm++)
		;
	for (ow = 0; owner[ow]; ow++)
		;

	pup->name = malloc(nm + 1);
	pup->owner = malloc(ow + 1);

	if (pup->name == NULL || pup->owner == NULL)
	{
		free(pup->owner);
		free(pup->name);
		free(pup);
		return (NULL);
	}

	for (i = 0; i < nm; i++)
		pup->name[i] = name[i];
	pup->name[i] = '\0';

	pup->age = age;

	for (i = 0; i < ow; i++)
		pup->owner[i] = owner[i];
	pup->owner[i] = '\0';

	return (pup);
}
