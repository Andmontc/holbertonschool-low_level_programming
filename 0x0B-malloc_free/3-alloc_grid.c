#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function that allocates a matrix
 * @width: ancho
 * @height: alto
 * Return: matriz
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}