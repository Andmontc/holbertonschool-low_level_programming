#include "holberton.h"
/**
* string_toupper - function that puts uppercase to a lowercase letter
* @s: string to change
* Return: the string transformed
*
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
return (s);
}

