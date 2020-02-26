#include "holberton.h"
/**
* is_palindrome - main function
* @s: string
* Return: is palindrome or no
*/
int _strlen_recursion(char *s);
int compare(char *s, int f, int x);
int is_palindrome(char *s)
{
	int j = _strlen_recursion(s);

	return (compare(s, 0, j - 1));

}
/**
* _strlen_recursion - funcion for lenght
* @s: string
* Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
* compare - function that compares the strings
* @s: string
* @f: initial position value
* @x: final position value
* Return: is palindrome or no
*/
int compare(char *s, int f, int x)
{
	if (x < 0)
	{
		return (1);
	}
	if (s[f] == s[x])
	{
		return (compare(s, f + 1, x - 1));
	}
	else
		return (0);
}
