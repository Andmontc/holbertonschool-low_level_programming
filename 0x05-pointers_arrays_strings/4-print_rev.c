#include "holberton.h"
/**
 *print_rev - prints reverse
 *@str: char
 *Return: void
 */
void print_rev(char *str)
{
	int count = 0;
	int x;

	while (*str != '\0')
	{
		count++;
		str++;

	}

	for (x = 0; x < count; x++)
	{
		str--;
		_putchar(*str);
	}
	_putchar('\n');
}

