#include "main.h"

/**
 * _strdup - Make a copy of a string
 * @str: string
 *
 * Return: Pointer to new string or NULL if error
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(*str));

	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
