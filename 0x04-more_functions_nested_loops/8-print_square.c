#include "holberton.h"
/**
* print_square - Entry point
*@size: variable that has the size of the square
*
*/
void print_square(int size)
{
	int fila = 0;
	int columna;

	if (size > 0)
	{
		while (fila < size)
		{
			for (columna = 1; columna <= size; columna++)
			{
				_putchar('#');

				if (columna == size)
				{
				_putchar('\n');
				}
			}
		fila++;
		}
	}
	else
	{
	_putchar('\n');
	}
}



