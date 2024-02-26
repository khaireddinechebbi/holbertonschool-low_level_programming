#include "main.h"
/**
* print_diagonal - print diagonal
*/
void print_diagonal(int n)
{
int i = 1;
while (i <= n)
{
_putchar(' ');
i++;
}
if (n != 0)
_putchar('\\');
_putchar('\n');
}
