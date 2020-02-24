#include "holberton.h"
/**
* _strchr-function that locates a character in a string
* @s: first parameter
* @c: second parameter
* Return: string
*/
char  *_strchr(char *s, char c)
{
	int i;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}
	}
return (0);
}


