#include "holberton.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int a;
	int j = 1;

	while (j <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar(10);
		j++;
	}
}
