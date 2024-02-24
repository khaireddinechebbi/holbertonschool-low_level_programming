#include "main.h"
/**
* add - addition of two integers
* @a: integer
* @b: integer
* Return: i successful
*/
int add(int a, int b)
{
int i;
i = a + b;

if (i < 10 && i > -10)
{
if (i < 0)
{
i *= -1;
_putchar('-');
_putchar(i + '0');
}
else
{
_putchar(i + '0');
}
}
else if (i < 100 && i > -100)
{
if (i < 0)
{
i *= -1;
_putchar('-');
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
else
{
if (i < 0)
{
i *= -1;
_putchar('-');
_putchar(i / 100 + '0');
_putchar((i % 100) / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i / 100 + '0');
_putchar((i % 100) / 10 + '0');
_putchar(i % 10 + '0');
}
}
_putchar('\n');
return (i);
}
