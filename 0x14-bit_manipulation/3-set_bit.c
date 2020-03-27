#include "holberton.h"
/**
 * set_bit - function that sets a byte
 * @n: number
 * @index: place to set the bit
 * Return: byte -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
