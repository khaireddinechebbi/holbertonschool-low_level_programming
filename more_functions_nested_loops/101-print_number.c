#include "main.h"
/**
* print_number - print numbers
* @n: integer
*/
void print_number(int n)
{
int i = 10;
if (n < 0)
{
n *= -1;
_putchar('-');
}
while (n / i > 0)
{
i *= 10;
}
while (i >= 10)
{
n = n % i;
i /= 10;
_putchar(n / i + '0');
}
}
