#include "main.h"

/**
 * _strncpy - Copy (n)bytes from src to dest
 * @dest: destination buffer
 * @src: source buffer (i.e string to be copied)
 * @n: number byte(s) to be copied
 *
 * Return: destination address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
