#include "holberton.h"
/**
* add - Entry point
* @a: first number
* @b: second number
* Return: 0
*
*/
int _isupper(int c)
{
	char letra;

	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		if ( c == letra)
			return (1);
	}
	return (0);
}
