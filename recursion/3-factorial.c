#include "main.h"
/**
* factorial - print the result of factorial
* @n: int
* Return: result
*/
int factorial(int n)
{
if (n > 1)
{
n *= factorial(n - 1);
return (n);
}
else if (n == 0 || n == 1)
return (1);
else
return (-1);
}
