#include "3-calc.h"
/**
 * main - main function
 * @argc: contador
 * @argv: vector
 * Return: operation
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL)
	{
		printf("Error");
		exit(98);
	}
	if (get_op_func[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
