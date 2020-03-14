#include "variadic_functions.h"
/**
 * print_strings - function that prints any amount of strings
 * @separator: strings separator
 * @n: number of strings
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vastring;
	char *p;

	va_start(vastring, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		p = va_arg(vastring, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(vastring);
	printf("\n");
}
