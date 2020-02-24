#include "holberton.h"
/**
*_strstr- function that locates a substring
*@haystack: first string
*@needle: second string
* Return: the substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	if (!haystack[i])
		break;
	}
return (0);
}
