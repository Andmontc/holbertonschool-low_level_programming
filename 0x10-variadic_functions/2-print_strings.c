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

	for (i = 0; i < n && separator; i++)
	{
		p = va_arg(vastring, char *);
		printf("%s", p);
		if (p == NULL)
		{
			printf("nil");
		}

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
