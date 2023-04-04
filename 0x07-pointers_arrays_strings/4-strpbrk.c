#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: string
 * @accept: string
 *
 * Return: pointer to found search
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = s;
	int i;

	while (*temp != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*temp == accept[i])
				return (temp);
			i++;
		}
		temp++;
	}

	return (NULL);
}
