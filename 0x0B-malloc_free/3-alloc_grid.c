#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - create a 2D array
  * @width: width of the array
  * @height: height of the array
  *
  * Return: pointer to the @D array
  */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		if (mem == NULL)
			return (NULL);
		mem[i] = (int *)malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (mem[i] == NULL)
				return (NULL);
			mem[i][j] = 0;
		}
	}

	return (mem);
}
