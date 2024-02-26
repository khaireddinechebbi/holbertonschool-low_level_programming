#include "main.h"
/**
* print_diagonal - print diagonal
* @n: integer
*/
void print_diagonal(int n)
{
int x, l;
if (n <= 0)
_putchar('\n');
else
{
for (l = 1; l <= n; l++)
{
for (x = 1; x <= l - 1; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
