#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - calls a function and pass an element of an
  * array has it's argument
  * @array: array
  * @size: size of the array
  * @action: pointer to function
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
