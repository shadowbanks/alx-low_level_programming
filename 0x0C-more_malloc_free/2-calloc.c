#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: the array
 * @size: array size
 *
 * Return: Pointer to memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
