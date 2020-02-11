
#include "holberton.h"

/**
* print_alphabet - Entry point
*
* Return: 0 (Success)
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar(10);

}

