#include "main.h"

void *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocate memory for an array
 * @nmemb: the array
 * @size: array size
 *
 * Return: Pointer to memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);


	return (_memset(ptr, 0, nmemb * size));
}

/**
 * _memset -  Fill "n" bytes of the memory area pointed
 *  to by "s" with the constant byte b
 *  @s: Memory area to be filled
 *  @b: constant byte to be filled with
 *  @n: byte to be filled
 *
 *  Return: Pointer to the memory area "s"
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
