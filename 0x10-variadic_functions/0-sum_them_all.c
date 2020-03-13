#include "variadic_functions.h"
/**
 * sum_them_all - function that sums any amount of arguments
 * @n: number of arguments
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list vasum;

	va_start(vasum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(vasum, int);
	}
	va_end(vasum);
	return (sum);
}
