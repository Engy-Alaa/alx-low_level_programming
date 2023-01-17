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

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dogt = malloc(sizeof(dog_t));
if (dogt == NULL)
return (NULL);

dogt->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogt->name == NULL)
{
free(dogt);
return (NULL);
}

dogt->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dogt->owner == NULL)
{
free(dogt->name);
free(dogt);
return (NULL);
}

dogt->name = _strcpy(dogt->name, name);
dogt->age = age;
dogt->owner = _strcpy(dogt->owner, owner);

return (dogt);
}

