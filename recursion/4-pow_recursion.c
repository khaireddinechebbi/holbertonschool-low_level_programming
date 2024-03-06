#include "main.h"
/**
*/
int _pow_recursion(int x, int y)
{
unsigned int r = 1;
if (y > 0)
{
r = x;
r *= _pow_recursion(x, y - 1);
return (r);
}
else if (y < 0)
{
return (-1);
}
else
return (1);
}
