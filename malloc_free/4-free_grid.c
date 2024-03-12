#include "main.h"
#include <stdlib.h>
/**
* **free_grid - free grid
* @grid: two dimentional array
* @height: int
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
