#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: the string to check and count prefix substring
 * @accept: string to check against
 *
 * Return: number of bytes of the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, sum = 0;
	char *temp = s;

	while (*temp != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*temp == accept[j])
			{
				sum++;
				break;
			}
			j++;
		}

		if (i >= sum)
			return (sum);
		i++;
		temp++;
	}

	return (0);
}
