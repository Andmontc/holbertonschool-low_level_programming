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
}
