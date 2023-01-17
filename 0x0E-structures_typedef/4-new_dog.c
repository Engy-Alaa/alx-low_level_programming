#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogt;
	int i, lname, lowner;

	dogt = malloc(sizeof(*dogt));
	if (dogt == NULL || name == NULL || owner == NULL)
	{
		free(dogt);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dogt->name = malloc(lname + 1);
	dogt->owner = malloc(lowner + 1);

	if (name == NULL || owner == NULL)
	{
		free(dogt->owner);
		free(dogt->name);
		free(dogt);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		dogt->name[i] = name[i];
	dogt->name[i] = '\0';

	dogt->age = age;

	for (i = 0; i < lowner; i++)
		dogt->owner[i] = owner[i];
	dogt->owner[i] = '\0';

	return (dogt);
}
