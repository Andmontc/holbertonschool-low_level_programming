#include "holberton.h"
/**
* factorial - function that calculates a factorial of a number
* @n: number
* Return: the factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
