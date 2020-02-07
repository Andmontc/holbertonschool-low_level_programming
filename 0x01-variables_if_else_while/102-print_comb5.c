#include <stdio.h>

/**
 * main - Entry
 * Return: 0.
 */
int main(void)
{

int i, j;

for (i = 0; i <= 99; i++)
{
	for (j = i + 1; j <= 99; j++)
	{
		int num1 = (i / 10) + 48;
		int num2 = (i % 10) + 48;
		int num3 = (j / 10) + 48;
		int num4 = (j % 10) + 48;


		putchar(num1);
		putchar(num2);
		putchar(' ');
		putchar(num3);
		putchar(num4);

		if (num1 != '9' || num2 != '8' || num3 != '9' || num4 != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
}
	putchar('\n');
	return (0);
}
