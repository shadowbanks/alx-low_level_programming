#include "main.h"

/**
 * cap_string - Capitalize all words
 * @s: the string to be worked on
 *
 * Return: the string's address
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		i++;
	}

	return (s);
}
