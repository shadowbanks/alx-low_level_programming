#include "main.h"
#include <stdio.h>
/**
 * free_grid - Free the memory of a 2D-array
 * @grid: the 2D-array
 * @height: the height of the array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;


	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
