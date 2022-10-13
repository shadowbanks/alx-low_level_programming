#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - Search for a particular number
  * @array: array of numbers to be searched
  * @size: size of the array
  * @cmp: function where number will be searched
  *
  * Return: nothing
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
