#include "main.h"

/**
 * _strspn - locate the first occurrence in a string
 * @s: string/ sub-string to find
 * @accept: string to search
 *
 * Return: byte count of substring found, else NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, f;

	i = 0;
	j = 0;
	f = 0;
	count = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{

			if ((*(s + i) >= 'a' && *(s + i) <= 'z') ||
					(*(s + i) >= 'A' && *(s + i) <= 'Z'))
			{
				if (*(s + i) == *(accept + j))
				count++;
			}
			else
				return (count);

			if (*(s + 0) == *(accept + j))
				f++;

			j++;
		}
		if (f == 0)
			return (0);
		i++;
	}
	return (count);
}

