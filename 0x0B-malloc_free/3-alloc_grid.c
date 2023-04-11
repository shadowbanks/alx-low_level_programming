#include "main.h"

/**
 * alloc_grid - Create a two dim array
 * @width: array's width
 * @height: array's height
 *
 * Return: Pointer to two dim-array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j;

	ptr = malloc(height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (i <  height)
	{
		ptr[i] = malloc(width * sizeof(int));
		j = 0;

		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
