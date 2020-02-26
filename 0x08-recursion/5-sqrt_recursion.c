#include "holberton.h"
/**
* _sqrt_recursion -  main function
* @n: number
* Return: result
* cuadrado - function to do de potency
* @n: number
* @x: potency
*/
int cuadrado(int n, int x);
int _sqrt_recursion(int n)
{
	return (cuadrado(n, 0));
}
int cuadrado(int n, int x)
{
	if (n == (x * x))
	{
	return (x);
	}
	else if ((x * x) > n)
	{
	return (-1);
	}
	else
		return (cuadrado(n, (x + 1)));
}
