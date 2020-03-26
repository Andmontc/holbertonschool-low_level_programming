#include "holberton.h"
/**
 * binary_to_uint - function that prints a decimal from a binary
 * @b: string of binaries
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int exp = 1;
	int i, j = 0, len = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		j++;
		len++;
	}

	for (i = 0; i < j; i++)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
		{
			return (0);
		}
		else
		{
			decimal += (b[len - 1] - '0') * exp;
			exp *= 2;
		}
		len--;
	}
return (decimal);
}
