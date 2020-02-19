#include "holberton.h"
/**
*rev_string- function that reverse an array
*@s: the array to reverse
*
*/
void rev_string(char *s)
{
	int i = 0;
	int j, tmp;
	char fake[1000];

	while (s[i] != '\0')
	{
		fake[i] = s[i];
		i++;
	}
	fake[i] = '\0';
	tmp = i;

	for (j = 0; j < tmp ; j++)
	{
		s[j] = fake[i - 1];
		i--;
	}
}

