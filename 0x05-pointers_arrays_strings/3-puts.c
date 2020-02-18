#include "holberton.h"
/**
* _puts- function that prints a string
* @str: variable that contains the string
*/
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar(10);
}

