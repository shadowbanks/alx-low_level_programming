#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free up memory of a previously created 2D array
  * @grid: 2D array
  * @height: 2D array's height
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
