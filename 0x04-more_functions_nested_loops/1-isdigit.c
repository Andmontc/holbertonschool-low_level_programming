#include "holberton.h"
/**
* _isdigit - Entry point
* @c: character to evaluate
* Return: 1 uppercase, 0 if dont
*
*/
int _isdigit(int c)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == c)
			return (1);
	}

	return (0);
}
