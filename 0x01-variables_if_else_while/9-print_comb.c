#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	int ab;

	for (ab = 48; ab <= 57; ab++)
	{
		putchar(ab);

		if (ab != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar(10);

	return (0);
}
