#include "holberton.h"
/**
* _strchr-function that locates a character in a string
* @s: first parameter
* @c: second parameter
* Return: string
*/
char  *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j++;

		for (i = 0; i < j; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}

return (0);
}


