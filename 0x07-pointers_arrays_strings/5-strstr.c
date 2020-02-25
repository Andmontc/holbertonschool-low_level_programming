#include "holberton.h"
/**
*_strstr- function that locates a substring
*@haystack: first string
*@needle: second string
* Return: the substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;


	for (i = 0; haystack[i]; i++)
	{
		for (n = i, j = 0; needle[j]; j++, n++)
		{
			if (haystack[n] != needle[j] || haystack[n] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);

	}
return (0);
}
