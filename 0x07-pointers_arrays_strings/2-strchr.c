#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds the first occurrence of the character "c"
 * in the string "s"
 * @s: the string to be searched
 * @c: search character
 *
 * Return: Pointer to the first occurance of the character
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
			return (temp);
		temp++;
	}

	return (NULL);
}
