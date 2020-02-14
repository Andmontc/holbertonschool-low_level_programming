#include <stdio.h>
/**
* main - biggest factorial prime
*
* Return: Always 0
*/
int main(void)
{
	long num = 612852475143;
	long fact;

	while (fact < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (fact = 3; fact < (num / 2); fact += 2)
		{
			if ((num % fact) == 0)
				num /= fact;
		}
	}

	printf("%ld\n", num);

	return (0);
}

