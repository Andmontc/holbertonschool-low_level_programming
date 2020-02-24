#include "holberton.h"
/**
* _memset- Function ta¡hat sets a buffer
* @s: array
* @b: array to set
* @n: number of iterations
* Return: array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	i++;
	}
return (s);
}

