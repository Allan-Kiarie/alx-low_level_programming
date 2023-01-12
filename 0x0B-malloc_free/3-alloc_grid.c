#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - points to a two dimensional array of integers
 * @width: columns in array
 * @height: rows in array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j **ptrgrid;

	if (width < 1 || height < 1)
		return (NULL);

	ptrgrid = malloc(sizeof(int *) * height);

	if (ptrgrid == NULL)
	{
		free(ptrgrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptrgrid[i] = malloc(sizeof(int) * width);

		if (ptrgrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptrgrid[i]);
			free(ptrgrid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptrgrid[i][j] = 0;
		}
	}

	return (ptrgrid);
}

