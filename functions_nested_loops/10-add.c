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
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
_putchar('\n');
return (i);
}
