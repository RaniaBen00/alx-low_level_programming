#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry Point
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
int n;
for (n = 0; n < height; n++)
{
free(grid[n]);
}
free(grid);
}
