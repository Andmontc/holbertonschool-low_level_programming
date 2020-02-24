/**
* _strpbrk- Functiont that searches a string for any pf a set of bytes
* @s: first string
* @accept: second string
* Return: string with occurences
*/
char *_strpbrk(char *s, char*accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for ( j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	if (!s[i])
		break;
	}
return (0);
}

