#include <stdio.h>
#include "holberton.h"
/**
*print_array - function that prints an array of numbers
*@a: array
*@n: size of the array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
}




