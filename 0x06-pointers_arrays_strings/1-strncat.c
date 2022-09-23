#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of byte of src
 *
 * Return: location to conbined string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count = 0;
	int total;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i < n; i++)
	{
		*(dest + count + i) = *(src + i);
	}

	total = count + n;

	*(dest + total) = '\0';

	return (dest);
}
