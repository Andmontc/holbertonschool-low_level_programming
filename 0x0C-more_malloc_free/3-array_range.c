#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - function that makes an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: array
 */
int *array_range(int min, int max)
{
	int *anum;
	int len, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	len = max - (min + 1);
	anum = malloc(sizeof(int) * len);
	if (!anum)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++, j++)
	{
		anum[j] = i;
	}
return (anum);
}
