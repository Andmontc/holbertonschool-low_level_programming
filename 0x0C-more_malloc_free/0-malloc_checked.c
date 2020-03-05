#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that exits with a 98
 * @b: parameter given
 * Return: exit or parameter
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
		if (p == NULL)
		{
			exit(98);
		}
	return (p);
}
