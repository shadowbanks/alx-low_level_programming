#include "main.h"

/**
 * leet - 1337 encoding
 * @s - string to encode
 *
 * Return: New string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[5] = "aeotl";
	char code[5] = "43071";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == letters[j] || (s[i] + 32) == letters[j])
				s[i] = code[j];
			j++;
		}
		i++;
	}

	return (s);
}
