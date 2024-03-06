#include "main.h"
/**
* _sqrt_recursion - print the sqrt of numbers
* @n: int
* Return: result
*/
int _sqrt_recursion(int n)
{
int x = 0;
if (n >= 0)
{
if (x * x != n && x * x < n)
{
x += 1;
_sqrt_recursion(n);
}
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
}
else if (n < 0)
return (-1);
}
