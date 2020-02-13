#include "holberton.h"
/**
* _isupper - Entry point
* @c: character to evaluate
* Return: 1 uppercase, 0 if dont
*
*/
int _isupper(int c)
{
	char letra;

	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		if (c == letra)
			return (1);
	}
	return (0);
}
