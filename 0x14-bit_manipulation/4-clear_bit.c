#include "holberton.h"
/**
 * clear_bit - function that set a byte to 0
 * @n: number
 * @index: place where te 0 is put
 * Return: -1 error, 1 sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
