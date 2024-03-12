#include "main.h"
#include <stdlib.h>
/**
* **alloc_grid -  returns a pointer to a 2 dim array of integers
* @width: int
* @height: int
* Return: s
*/
int **alloc_grid(int width, int height)
{
int *A;
int w, h;
if (width <= 0 || height <= 0)
return (NULL);

A = malloc(sizeof(int) * (width + height));

for (w = 0; w < width; w++)
{
for (h = 0; h < height; h++)
{
A[h] = 0;
}
return ('\n');
}
return (A);
}
