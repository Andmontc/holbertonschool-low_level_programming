#include "holberton.h"
/**
* print_most_numbers - Entry point
*
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + 48);
	}
	_putchar('\n');
}
