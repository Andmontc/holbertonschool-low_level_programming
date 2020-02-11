#include "holberton.h"
/**
* times_table - Entry point
*
* Return: variable which contains the last digit
*
*/
void times_table(void)
{
	int table = 0;
	int contador;

	while (table <= 9)
	{
		for (contador = 0; contador <= 9; contador++)
		{
			int resul = (table  * contador);
			int num1 = resul / 10;
			int num2 = resul % 10;

			if (resul > 9)
			{
			_putchar(num1 + 48);
			_putchar(num2 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(num2 + 48);
			}
			if (contador != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		 _putchar('\n');
		table++;
	}
}
