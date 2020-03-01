#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry function
 * @argc: counter
 * @argv: vector
 * Return: 1 error, 0 sucess
 */
int main(int argc, char *argv[])
{
	int i, cents, cambio = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cents / coins[i])
			{
				cambio += cents / coins[i];
				cents %= coins[i];
			}
		}
	}
printf("%d\n", cambio);
return (0);
}
