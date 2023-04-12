#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: grid function
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int check;

	for (check = 0; check < height; check++)
		free(grid[check]);

	free(grid);
}
