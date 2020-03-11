#include "3-calc.h"
/**
 * op_add - function that sum
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function that substract
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0 || b < 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
return (a / b);
}
/**
 * op_mod - function for module
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0 || b < 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);
}

