#include "main.h"
/**
* print_square - print squares
* @size: integer
*/
void print_square(int size)
{
int l, c;
if (size > 1)
{
for (l = 1; l <= size; l++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
if (size == 1)
{
_putchar('#');
}
_putchar('\n');
}
}
