#include "main.h"

/**
 * _strncat - Concatenate two strings using n number(s) of bytes
 * @dest: Destinantion string
 * @src: string to be append to dest
 * @n: number of bytes
 *
 * Return: the pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *temp = dest;

	while (temp[i] != '\0')
	{
		i++;
	}

	while (j < n  && src[j] != '\0')
	{
		temp[i] = src[j];
		i++;
		j++;
	}

	temp[i] = '\0';

	return (dest);
}
