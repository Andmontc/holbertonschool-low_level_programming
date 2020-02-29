#include <stdio.h>
/**
* main - entry point
* @argc: contador
* @argv: vector
* Return: 0 sucess
*/

int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
