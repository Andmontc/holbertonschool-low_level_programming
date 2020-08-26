#include "search_algos.h"
/**
* jump_steps - Function that check the value
* @array: array given
* @start: start of the array
* @end: end of the array
* @value: value to find
* Return: value or failure
*/
int jump_steps(int *array, int start, int end, int value)
{

	for (; start <= end; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (array[start] == value)
			return (start);
	}
	return (-1);
}
/**
* jump_search - Function that search the value
* @array: array given
* @size: size of the array
* @value: value to find
* Return: value or failure
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = 0; i < (size + step); i = i + step)
	{
		if (i > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
			return (jump_steps(array, i - step, (int)size - 1, value));
		}
		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
			return (jump_steps(array, i - step, i, value));
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
