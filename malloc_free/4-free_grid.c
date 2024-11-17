#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Entry of the program
 * @grid: assadasadsd
 * @height: sadadasd
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}