#include <unistd.h>
/**
 * main - Prints with Write to show the standard error
 * Return:1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
