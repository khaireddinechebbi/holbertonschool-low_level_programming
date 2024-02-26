#include "main.h"
/**
* print_triangle - print triangles
* @size: integers
*/
void print_triangle(int size)
{
int l, c;
if (size <= 0)
_putchar('\n');
else
{
if (size == 1)
_putchar('#');
else
{
for (l = 1; l <= size; l++)
{
for (c = 1; c <= size - l; c++)
{
_putchar(' ');
}
for (c = size - l + 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
}
