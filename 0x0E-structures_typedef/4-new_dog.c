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
* *_strncpy - function that copies a string
* @dest: array copied
* @src: original array
* @n: contador
* Return: array
*/
char *_strncpy(char *dest, char *src, int n)
{
	int conts;

	for (conts = 0; src[conts] != '\0'; conts++)
	{
		if (conts < n)
		dest[conts] = src[conts];
	}
	for (; conts < n; conts++)
	{
		dest[conts] = '\0';
	}
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
	_strncpy(nname, name, lenname);
	_strncpy(nowner, owner, lenowner);


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
