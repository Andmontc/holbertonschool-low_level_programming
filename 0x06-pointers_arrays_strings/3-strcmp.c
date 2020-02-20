#include "holberton.h"
/**
* _strcmp- function that compares
* @s1: primera string
* @s2: segunda string
*Return: return the comparation
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
return (s1[i] - s2[i]);
}
