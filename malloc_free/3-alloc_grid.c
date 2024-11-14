#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Entry of the program
 * @width: dasd
 * @height: dadssa
 * Return: dads
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	int x, y;

	if (width == 0)
	{
		return (NULL);
	}
	if (height == 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));

		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(ptr[y]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
