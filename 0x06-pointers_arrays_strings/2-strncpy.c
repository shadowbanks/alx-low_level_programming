#include "main.h"
/**
 * _strncpy - string copy
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of byte of src
 *
 * Return: location to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == ' ')
			*(dest + i) = '\0';
		*(dest + i) = *(src + i);
		count++;
	}

	*(dest + count) = '\0';

	return (dest);
}
