#include "holberton.h"
/**
* is_prime_number -  main function
* @n: number
* @x: module
* Return: is prime or not
*/
int primo(int n, int x);
int is_prime_number(int n)
{
	return (primo(n, 2));
}
/**
* primo - function to verify if number is prime or not
* @n: number
* @x: module
* Return: if prime or no
*/
int primo(int n, int x)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else if ((x * x) > n)
	{
		return (1);
	}
	return (primo(n, x + 1));
}
