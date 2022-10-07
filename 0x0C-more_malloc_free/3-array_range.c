#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array range of integers
  * @min: starting integer
  * @max: last interger number
  *
  * Return: pointer to the array
  */

int *array_range(int min, int max)
{
	int i, *mem;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(min) * (max - min + 1));

	for (i = 0; min <= max; i++)
	{
		if (mem == NULL)
			return (NULL);
		mem[i] = min++;
	}

	return (mem);
}
