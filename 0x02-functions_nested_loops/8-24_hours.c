#include "holberton.h"
/**
* jack_bauer - Entry point
*
* Return: variable which contains the last digit
*
*/
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			int num1 = h / 10;
			int num2 = h % 10;
			int num3 = m / 10;
			int num4 = m % 10;

			_putchar(num1 + 48);
			_putchar(num2 + 48);
			_putchar(':');
			_putchar(num3 + 48);
			_putchar(num4 + 48);
			_putchar('\n');
		}
	}
}
