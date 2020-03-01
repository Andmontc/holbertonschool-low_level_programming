#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: contador
 * @argv: vector
 * Return: 1 error, 0 sucess
 */
int main(int argc, char *argv[])
{
	int i, j;
	int suma = 0;

	if (argc == 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[i]);
	}
printf("%d\n", suma);
return (0);
}
