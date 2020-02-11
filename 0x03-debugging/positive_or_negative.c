#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d%s\n", i, " is positive");

	else if (i == 0)
		printf("%d%s\n", i, " is zero");

	else
		printf("%d%s\n", i, " is negative");

}
