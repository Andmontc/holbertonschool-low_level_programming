#include "holberton.h"
/**
* _memcpy- function that copies a buffer
* @dest: parameter that recieves the copy
* @src: parameter to copy
* Return: the buffer
* @n: int
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
