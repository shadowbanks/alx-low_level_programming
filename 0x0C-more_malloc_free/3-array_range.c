#include "main.h"

/**
 * array_range - Create an array of range of integers
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: Pointer to the array or NULL on failure
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, size = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(max) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
		ptr[i++] = min++;

	return (ptr);
}
