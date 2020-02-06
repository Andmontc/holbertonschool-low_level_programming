#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
	{
		putchar(ab);
	}
		putchar(10);

	return (0);
}
