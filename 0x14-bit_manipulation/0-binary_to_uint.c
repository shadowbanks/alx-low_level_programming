#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: pointer to the binary number
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	char *bin = strdup(b);
	unsigned int i = 0, sum = 0;

	if (b == NULL)
		return (0);
	rev_string(bin);

	while (bin[i] != '\0')
	{
		if (bin[i] == '1' || bin[i] == '0')
		{
			sum += (bin[i] - '0') << i;
			i++;
		}
		else
		{
			free(bin);
			return (0);
		}

	}
	free(bin);
	return (sum);
}

/**
 * rev_string - Reverse a string
 * @s: the string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	char temp;
	int i = 0;

	while (i < len)
	{
		temp = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = temp;
		i++, len--;
	}
}

/**
 * _strlen - Calculate length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++, s++;
	return (i);
}
