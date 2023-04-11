#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to the combined string or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr;

	ptr = malloc(sizeof(*s1) + sizeof(*s2) + 1);

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] =  s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i] =  s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
