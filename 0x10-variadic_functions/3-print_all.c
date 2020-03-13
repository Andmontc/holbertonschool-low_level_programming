#include "variadic_functions.h"
/**
 * print_c- function that prints a character
 * @pc: character to print
 */
void print_c(va_list pc)
{
	printf("%c", va_arg(pc, int));
}
/**
 * print_i - function that prints an integer
 * @pi: integer to print
 */
void print_i(va_list pi)
{
	printf("%d", va_arg(pi, int));
}
/**
 * print_f - Function that prints a float
 * @pf: float to print
 */
void print_f(va_list pf)
{
	printf("%f", va_arg(pf, double));
}
/**
 * print_str - Function that prints a string
 * @str: string to print
 */
void print_str(va_list str)
{
	char *ptr;

	ptr = va_arg(str, char *);

	if (ptr == NULL)
	{
		ptr = ("(nil)");
	}
	printf("%s", ptr);

}
/**
* print_all - Funtion that prints all formats
* @format: format to print
*/
void print_all(const char * const format, ...)
{
	ops fmt[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_str},
	{NULL, NULL}
	};
	int i, j;
	char *sp = "";
	va_list vlist;

	va_start(vlist, format);
		i = 0;
		while (format && format[i])
		{
			j = 0;
			while (j < 4)
			{
				if (format[i] == *fmt[j].op)
				{
					printf("%s", sp);
					fmt[j].f(vlist);
					sp = ", ";
				}
			j++;
			}
		i++;
		}
		va_end(vlist);
		printf("\n");
}
