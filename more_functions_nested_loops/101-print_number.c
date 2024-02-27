#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
if (n < 0)
{
if (n != INT_MIN)
_putchar('-');
n = -n;
else
_putchar(n % 10 + '0');
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
