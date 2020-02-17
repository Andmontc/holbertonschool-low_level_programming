#include <stdio.h>
/**
* main - entry point
* Return: 0 sucess
*/
int main(void)
{
	double sum;
	double num1 = 1;
	double num2 = 2;
	int x;

	printf("%.f,", num1);
	printf(" %.f,", num2);

	for (x = 0; x < 48; x++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		printf(" %.f,", sum);
	}
	printf("\n");
	return (0);
}




