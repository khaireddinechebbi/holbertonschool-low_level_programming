#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print diagrams
* @a: array square
* @size: int
*/
void print_diagsums(int *a, int size)
{
int i, j;
unsigned int l = 0, w = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
if (j == i)
{
l += a[i][j];
}
if (j == size - i -1)
{
w += a[i][j];
}
}
printf("%d, %d", l, w);
}
