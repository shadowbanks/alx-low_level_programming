#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - create a dynamic memory
  * @b: variable
  * Return: pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
