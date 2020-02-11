#include "holberton.h"
/**
* print_last_digit - Entry point
* @i: parameter of the function
* Return: variable which contains the last digit
*
*/
int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
		last *= -1;

		_putchar(last + 48);

		return (last);
}
