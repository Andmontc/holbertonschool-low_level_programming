#include "search_algos.h"
/**
* binary_search - function that searches for a value in a sorted array
* @array: array given
* @size: size of the array
* @value: value to find
* Return: value
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_help(array, 0, size - 1, value));
}
/**
* binary_search_help - helper function
* @array: array given
* @start: start of the array
* @end: end of the array
* @value: Value of the array
* Return: recursive
*/
int binary_search_help(int *array, int start, int end, int value)
{
	int mid, i;

	printf("Searching in array:");

	for (i = start; i <= end; i++)
	{
		if (i == start)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
	if (end == start && value != array[start])
		return (-1);

	mid = start + (end - start) / 2;

	if (value == array[mid])
		return (mid);

	if (value < array[mid])
	{
		return (binary_search_help(array, start, mid - 1, value));
	}
	else
		return (binary_search_help(array, mid + 1, end, value));
}
