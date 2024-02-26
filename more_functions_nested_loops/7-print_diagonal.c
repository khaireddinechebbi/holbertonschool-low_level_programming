#include "main.h"
/**
* print_diagonal - print diagonal
* @n: integer
*/
void print_diagonal(int n)
{
int i = 1;
while (i <= n)
{
_putchar(' ');
i++;
}
_putchar('\\');
if (n <= 0)
_putchar('\n');
}
