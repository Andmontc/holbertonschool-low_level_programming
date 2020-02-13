#include "holberton.h"
/**
* print_numbers - Entry point
*
*/
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + 48);
	}

	_putchar('\n');
}
