#include "holberton.h"
/**
* _islower - Entry point
* @c: variable to define is lowercase or not
* Return: 1 Lowercase 0 Uppercase
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
