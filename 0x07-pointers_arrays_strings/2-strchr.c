#include "main.h"

/**
  * _strchr - search for the first occurrence of a letter
  * @s: string to search the letter
  * @c: letter to find
  *
  * Return: pointer to the letter location or NULL if not found
  */

char *_strchr(char *s, char c)
{
	int i = 0;
	int count = 0;
	int j = 0;

	char *p = s;

	while (*(p + i) != '\0')
	{
		count++;
		i++;
	}

	while (j <= count)
	{
		if (*(p + j) == c)
			return (s + j);
		j++;
	}
	return ('\0');
}
