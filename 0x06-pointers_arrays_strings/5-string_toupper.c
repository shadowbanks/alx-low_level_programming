#include "main.h"

/**
 * string_toupper - Convert all lowercase to uppercase
 * @str: string to convert
 *
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}

	return (str);
}
