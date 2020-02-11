
#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */


int largest_number(int a, int b, int c)
{
	int largest;
	int apos = abs(a);
	int bpos = abs(b);
	int cpos = abs(c);

	if (apos > bpos && bpos > cpos)
	{
		largest = apos;
	}
	else if (bpos > apos && apos > cpos)
	{
		largest = bpos;
	}
	else
	{
		largest = cpos;
	}

	return (largest);
}
