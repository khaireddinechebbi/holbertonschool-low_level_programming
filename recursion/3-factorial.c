#include "main.h"
/**
* factorial - print the result of factorial
* @n: int
* Return: result
*/
int factorial(int n)
{
if (n > 1)
n *= (n - 1);
return (factorial(n))
if (n == 0 || n == 1)
return (1);
else
return(-1);
}
