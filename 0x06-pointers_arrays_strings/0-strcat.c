#include "holberton.h"
/**
* *_strcat - function that concatenates
* @dest: first string
* @src: second string
* Return: the string concatenated
*/
char *_strcat(char *dest, char *src)
{
	int contd, conts;

	for (contd = 0; dest[contd] != '\0'; contd++)
	{
	}
	for (conts = 0; src[conts] != '\0'; conts++)
	{
	dest[contd + conts] = src[conts];
	}


src = '\0';
return (dest);
}
