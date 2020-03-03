#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that prints an array
 * @size: size of the array
 * @c: character
 * Return: 0 sucess, null fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
