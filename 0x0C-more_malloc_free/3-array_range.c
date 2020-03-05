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
	int len, i;

	if (min > max)
	{
		return (NULL);
	}
	len = ((max - min) + 1);
	anum = malloc(sizeof(int) * len);
	if (anum == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++, min++)
	{
		anum[i] = min;
	}
return (anum);
}
