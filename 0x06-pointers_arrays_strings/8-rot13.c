#include "holberton.h"
/**
* *rot13 - function rot
* @s: string
* Return: srrin in rot13
*/
char *rot13(char *s)
{
	char am[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nz[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == am[j])
				s[i] = nz[j], j = 52;
		}
	}
return (s);
}
