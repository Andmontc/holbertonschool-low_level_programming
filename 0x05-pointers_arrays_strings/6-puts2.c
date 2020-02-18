#include "holberton.h"
/**
*puts2 - function that prints even numbers
*@str: string
*
*/
void puts2(char *str)
{


	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
	str++;
	}


_putchar(10);
}
