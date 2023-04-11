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

	if (height == 0 || width)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	while (i <  height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		i++;
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}

	return (ptr);
}
