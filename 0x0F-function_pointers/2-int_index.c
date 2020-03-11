#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - entry function
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer
 * Return: sucess 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
