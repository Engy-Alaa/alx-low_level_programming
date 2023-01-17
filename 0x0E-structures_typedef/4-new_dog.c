#include "dog.h"

/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
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
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
	return (NULL);

new_dog->name = malloc(sizeof(char) * (_strlen(owner) + 1));
new_dog->name = _strcpy(new_dog->name, name);

if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
new_dog->owner = _strcpy(new_dog->owner, owner);

if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
new_dog->age = age;
return (new_dog);
}
