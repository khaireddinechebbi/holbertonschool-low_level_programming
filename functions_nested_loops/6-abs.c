#include "main.h"
/**
* _abs - computes the absolute value
* @i: integer
* Return: 0 successful
*/
int _abs(int i)
{
if (i < 0)
{
_putchar((i * (-1)) + '0');
}
else
{
_putchar(i + '0');
}
_putchar('\n');
return (0);
}
