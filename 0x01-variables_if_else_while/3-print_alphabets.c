#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char ab;
	char cd;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	for (cd = 'A'; cd <= 'Z'; cd++)
	{
		putchar(cd);
	}
		putchar(10);

	return (0);
}
