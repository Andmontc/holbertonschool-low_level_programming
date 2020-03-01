#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Counter
 * @argv: vector
 * mul: multiplication
 * Return: 1 Error , 0 sucess
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
