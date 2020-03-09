#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strlen - function that calculates lenght of a string
* @str: string
* Return: the size  of the string
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}

return (i);
}
/**
**_strcpy-function that copy an array
*@dest: variable that copy the array
*@src: array to copy
*Return: the array copied
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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

	lenname = _strlen(name);
	lenowner = _strlen(owner);

	nname = malloc(lenname + 1);
	if (nname == NULL)
	{
		return (NULL);
	}
	nowner = malloc(lenowner + 1);
	if (nowner == NULL)
	{
		free(nname);
		return (NULL);
	}
	_strcpy(nname, name);
	_strcpy(nowner, owner);


	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(nname);
		free(nowner);
		return (NULL);
	}
	doggo->name = nname;
	doggo->age = age;
	doggo->owner = nowner;
	return (doggo);
}
