#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * @width: rows
 *
 * @height: columns
 *
 * Return: pointer to 2D array in the memory or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;
	int l;
	int *a;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		if (*(arr + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				a = arr[i];
				free(a);
			}
			free(arr);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (j = 0 ; j < width; j++)
		{
			arr[l][j] = 0;
		}
	}
	return (arr);
}
