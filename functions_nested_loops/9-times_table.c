#include "main.h"
/**
* times_table - print the 9 times table
*/
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (j != 9)
{
if (k < 10)
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
if (k < 10)
{
_putchar(k + '0');
_putchar('\n');
}
else
{
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar('\n');
}
}
}
}
}
