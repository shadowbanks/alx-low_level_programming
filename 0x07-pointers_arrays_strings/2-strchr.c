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

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
