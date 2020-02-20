#include "holberton.h"
/**
* *_strncat - function that concatenates two strings
* @dest: first string
* @src: second string
* @n: integer that counts
* Return: the string concatenated
*/
char *_strncat(char *dest, char *src, int n)
{
	int contd, conts;

	for (contd = 0; dest[contd] != '\0'; contd++)
	{
	}
	for (conts = 0; src[conts] != '\0'; conts++)
	{
		if (conts < n)
		{
		dest[contd + conts] = src[conts];
		}
	}

	src = '\0';
return (dest);
}
