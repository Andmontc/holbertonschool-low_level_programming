#include "holberton.h"
/**
*reverse_array- array that reverse an array
*@a: first array
*@n: lenght of the array
*
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
