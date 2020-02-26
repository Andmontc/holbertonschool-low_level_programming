#include "holberton.h"
/**
* _print_rev_recursion - function that prints a string in reverse
* @s: string as parameter
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{

	}
	else
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
