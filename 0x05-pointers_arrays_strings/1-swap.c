#include "holberton.h"
/**
* swap_int - function that swaps values
* @a: first variable
* @b: second variable
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
