#include "main.h"

/**
 * _memcpy - copies "n" bytes from memory area "src" to memory area "dest"
 * @dest: Memory area to hold the copy
 * @src: Memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: the dest address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
