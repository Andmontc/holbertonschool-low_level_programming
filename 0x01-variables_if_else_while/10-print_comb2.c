#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	int ab;

	for (ab = 0; ab <= 99; ab++)
	{
		putchar((ab / 10) + '0');
		putchar((ab % 10) + '0');

		if (ab != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar(10);

	return (0);
}
