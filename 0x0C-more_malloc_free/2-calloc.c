#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory for an array
  * @nmemb: number of element in the array
  * @size: size in byte for each element of the array
  *
  * Return: pointer to the array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, **mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
	{
		if (mem == NULL)
			return (NULL);
		mem[i] = malloc(size);
		mem[i] = 0;
	}

	return (mem);
}
