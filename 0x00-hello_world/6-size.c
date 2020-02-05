#include <stdio.h>
/**
 * main - Prints the differents sizes of variables
 * Return:0
 */

int main(void)
{
	printf("The size of a char is: %zu byte(s)\n", sizeof(char));
	printf("The size of an int is: %zu byte(s)\n", sizeof(int));
	printf("The size of a long int is: %zu byte(s)\n", sizeof(long int));
	printf("The Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %zu byte(s)\n", sizeof(float));
	return (0);
}
