#include "holberton.h"
/**
* more_numbers - Entry point
*
*/
void more_numbers(void)
{
	int contador = 0;
	int num;

		while (contador < 10)
		{
			for (num = 0; num <= 14; num++)
			{
				int num1 = num / 10;
				int num2 = num % 10;

				if (num1 != 0)
					_putchar(num1 + 48);
					_putchar(num2 + 48);
			}
			_putchar('\n');

			contador++;
		}
}
