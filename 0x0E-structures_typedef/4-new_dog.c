#include "dog.h"

/**
*_strcpy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcpy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}


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
	dog_t *dogt;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dogt = malloc(sizeof(dog_t));
	if (dogt == NULL)
	{
		return (NULL);
	}

	new_name = _strcpy(name);
	if (new_name == NULL)
	{
		free(dogt);
		return (NULL);
	}
	dogt->name = new_name;

	dogt->age = age;

	new_owner = _strcpy(owner);
	if (new_owner == NULL)
	{
		free(dogt->name);
		free(dogt);
		return (NULL);
	}
	dogt->owner = new_owner;

	return (dogt);
}
