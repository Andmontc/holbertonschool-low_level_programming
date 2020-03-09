#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  second entry
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: sucess
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname;
	char *nowner;
	int lenname, lenowner;

	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		return (NULL);
	}
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);

		lenname = strlen(name);
	lenowner = strlen(owner);

	nname = malloc(lenname + 1);
	if (nname == NULL)
	{
		return (NULL);
	}
	nowner = malloc(lenowner + 1);
	if (nowner == NULL)
	{
		return (NULL);
	}
	strcpy(nname, name);
	strcpy(nowner, owner);
}
