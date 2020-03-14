#include "variadic_functions.h"
/**
 * print_numbers - function that prints any amount of numbers
 * @separator: separator of arguments
 * @n: number of arguments
 * Return: print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vaprint;

	va_start(vaprint, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vaprint, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
va_end(vaprint);
printf("\n");
}
