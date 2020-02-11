#include "holberton.h"
/**
* _isalpha - Entry point
* @c: variable to define is lowercase or uppercase
* Return: 1 sucess 0 no
*
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
