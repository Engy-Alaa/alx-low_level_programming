#include "dog.h"
/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
	return (NULL);

new_dog->name = malloc(sizeof(char) * (strlen(owner) + 1));
new_dog->name = strcpy(new_dog->name, name);

if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
new_dog->owner = strcpy(new_dog->owner, owner);

if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
new_dog->age = age;
return (new_dog);
}
