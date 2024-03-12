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
int **A;
int h, w;
if (width <= 0 || height <= 0)
return (NULL);

A = malloc(sizeof(int) * height);
if (A == NULL)
return (NULL);

for (h = 0; h < height; h++)
{
A[h] = malloc(sizeof(int) * width);
if (A[h] == NULL)
return (NULL);

for (w = 0; w < width; w++)
{
  
A[h][w] = 0;
}
}
return (A);
}
