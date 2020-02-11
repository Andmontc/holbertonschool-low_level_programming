#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - Entry point
* @n: number
*
*/
void print_to_98(int n)
{
		if (n < 98)
		{
			while (n < 98)
			{
				printf("%d, ", n++);
			}
		}
		else
		{
			while (n > 98)
			{
				printf("%d, ", n--);
			}
		}
		if (n == 98)
		{
			printf("%d", n);
		}
		printf("\n");
}
