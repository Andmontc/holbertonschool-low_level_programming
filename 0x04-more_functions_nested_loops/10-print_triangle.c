
#include "holberton.h"
/**
* print_triangle - Entry point
*@size: variable that have the size of the triangle
*
*/
void print_triangle(int size)
{
	int i, x, a;

	for (i = size; i > 0; i--)
	{
		for (x = 1; x < i; x++)
		{
			_putchar(' ');
		}

		for (a = size; a >= i; a--)
		{
			_putchar('#');
		}

	_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
