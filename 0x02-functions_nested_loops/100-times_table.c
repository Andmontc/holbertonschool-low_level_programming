#include "holberton.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int contador, tabla, resul;

	if (n >= 0 && n <= 15)
	{
		for (contador = 0; contador <= n; contador++)
		{
			_putchar('0');

			for (tabla = 1; tabla <= n; tabla++)
			{
				_putchar(',');
				_putchar(' ');

				resul = contador * tabla;

				if (resul <= 99)
					_putchar(' ');
				if (resul <= 9)
					_putchar(' ');

				if (resul >= 100)
				{
					_putchar((resul / 100) + '0');
					_putchar(((resul / 10)) % 10 + '0');
				}
				else if (resul <= 99 && resul >= 10)
				{
					_putchar((resul / 10) + '0');
				}
				_putchar((resul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
