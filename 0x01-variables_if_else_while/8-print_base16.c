#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	int ab;
	char cd;

	for (ab = 48; ab <= 57; ab++)
	{
		putchar(ab);
	}
	for (cd = 'a'; cd <= 'f'; cd++)
	{
		putchar(cd);
	}
		putchar(10);

	return (0);
}
