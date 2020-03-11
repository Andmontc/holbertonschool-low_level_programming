#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - entry function
 * @array: array of integers
 * @size: size of the array
 * @action: function poiters
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
