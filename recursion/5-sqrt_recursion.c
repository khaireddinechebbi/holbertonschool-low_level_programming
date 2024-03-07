#include "main.h"
/**
*/
int power_err(int x, int n)
{
if (x * x == n)
return (x);
else if (x * x > n)
return (-1);
else
return (power_err(x + 1, n));

}

/**
* _sqrt_recursion - print the sqrt of numbers
* @n: int
* Return: result
*/
int _sqrt_recursion(int n)
{
int x = 1;
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else
return (power_err(x, n));
}
