#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
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
 * _strdup - function that copies an array
 * @str: array
 * Return: copy sucess, null fail
 */
char *_strdup(char *str)
{
	int i, len;
	char *copia;

	if (str == 0)
	{
		return (NULL);
	}
	len = _strlen(str);
	copia = malloc(sizeof(char) * (len + 1));
	if (copia == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copia[i] = str[i];
	}
	return (copia);
}
