#include "main.h"

/**
 * rot13 - rot13 encoding
 * @s: string to encode
 *
 * Return: New string
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char alphaB[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == alphaB[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
