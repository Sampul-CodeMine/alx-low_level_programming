#include "main.h"

/**
 * alloc_grid - creates a matrix (2-D grid)
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: a ponter to the matrix or NULL if any element is less than 1
 */

int **alloc_grid(int width, int height)
{
	int w = 0, h = 0;
	int **matx;

	if (width < 1 || height < 1)
		return (NULL);

	matx = malloc(height * sizeof(int *));

	if (matx == NULL)
	{
		free(matx);
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		matx[w] = malloc(width * sizeof(int));
		if (matx[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(matx[h]);
			free(matx);
			return (NULL);
		}
		for (h = 0; h < width; h++)
			matx[w][h] = 0;
	}

	return (matx);
}
