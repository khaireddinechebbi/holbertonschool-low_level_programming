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
for (i = 0; i < size**2; i += size + 1)
{
l += a[i];
}
for (j = size - 1; j < size**2 - 1; j += size - 1)
{
w += a[i];
}

printf("%d, %d\n", l, w);
}
