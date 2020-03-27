#include "holberton.h"
/**
 * flip_bits - function that counts bytes and flip it
 * @n: number
 * @m: number to flip n
 * Return: number of bits to flip to get n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numxor = m ^ n;
	unsigned int bits = 0;

	if (m == n)
		return (0);
	while (numxor)
	{
		if (numxor & 1)
			counter++;
		numxor = numxor >> 1;
	}

	return (bits);
}
