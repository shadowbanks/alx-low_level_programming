#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: amount of chars to be printed
  * @c - chars to be printed
  *
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	a = malloc(sizeof(char) * size);

	while (i < size)
	{
		*(a + i) = c;
		i++;
	}

	return (a);
}
