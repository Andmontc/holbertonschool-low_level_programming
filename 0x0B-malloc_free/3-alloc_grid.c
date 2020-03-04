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
	int **matriz;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matriz = malloc(sizeof(int *) * height);
	if (matriz == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);
		if (matriz[i] == 0)
		{
			for (; i <= 0; i--)
			{
				free(matriz[i]);
				free(matriz);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}
	return (matriz);
}
