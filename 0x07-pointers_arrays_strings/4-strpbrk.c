#include "main.h"

/**
 * _strpbrk - locate the first occurrence in a string
 * @s: string/ sub-string to find
 * @accept: string to search
 *
 * Return: pointer to found string, if not found return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;


	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{

			if ((s[i] >= 'a' && s[i] <= 'z') ||
					(*(s + i) >= 'A' && *(s + i) <= 'Z'))
			{
				if (s[i] == accept[j])
					return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

