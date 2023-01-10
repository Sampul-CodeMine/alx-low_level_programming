#include "main.h"

/**
  * free_grid - function to free up elements in a 2-D grid or matrix
  * @grid: the grid to point to
  * @height: height of the grid/matrix
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int itr;

	for (itr = 0; itr < height; itr++)
		free(grid[itr]);

	free(grid);
}

