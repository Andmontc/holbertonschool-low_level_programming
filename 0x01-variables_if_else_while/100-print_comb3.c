#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

		if (i != 56 || j != 57)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
		putchar(10);

	return (0);
}
