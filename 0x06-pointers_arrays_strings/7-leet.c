#include "holberton.h"
/**
* *leet- function that encodes a string
* @s: string that encodes
* Return: the string encoded
*/
char *leet(char *s)
{
	char mayu[6] = "AEOTL";
	char min[6] = "aeotl";
	char num[6] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 6; j++)
			if (s[i] == mayu[j] || s[i] == min[j])
				s[i] = num[j];
	}
return (s);
}

