#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'q')
			putchar(ab);
	}
		putchar(10);

	return (0);
}
