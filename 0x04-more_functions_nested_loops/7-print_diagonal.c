#include "holberton.h"
/**
* print_diagonal - entry point
*@n: diagonal variable
*
*/
void print_diagonal(int n)
{
	int a, espacio;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (espacio = 0; espacio < a; espacio++)
			_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

