#include "holberton.h"
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
 * str_concat- function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, lens1, lens2, total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	total = lens1 + lens2;
	concat = malloc(sizeof(char) * (total + 1));
	if (concat == 0)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < lens2; j++, i++)
	{
		concat[i] = s2[j];
	}
return (concat);
}
