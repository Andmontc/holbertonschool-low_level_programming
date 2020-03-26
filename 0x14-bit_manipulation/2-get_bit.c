#include "holberton.h"
/**
 * get_bit - function that gets a bit
 * @n: number given
 * @index: bit
 * Return: bit, or -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index <= 64)
	{
		bit = (n >> index) & 1;
		return (bit);
	}
	return (-1);
}
