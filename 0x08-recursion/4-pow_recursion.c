#include "holberton.h"
/**
* _pow_recursion - function that prints a potency of a number
* @x: base
* @y: potency
* Return: the operation
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
