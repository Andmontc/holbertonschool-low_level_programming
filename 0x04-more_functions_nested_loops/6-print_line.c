#include "holberton.h"
/**
* print_line - Entry point
*@n: variable to print
*/
void print_line(int n)
{
	if (n > 0)
	{
		int a;

			for (a = 0; a < n; a++)
			{
				_putchar('_');
			}
	}
	_putchar('\n');
}
