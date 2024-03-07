#include "main.h"
/**
* devide - devide two integers
* @a: int
* @n: int
* Return: 1 if prime num, 0 otherwise
*/
int devide(int a, int n)
{
if (n < 0)
{
return (0);
}
if (n % a == 0)
return (0);
if (n == a)
return (1);
else
return (devide(a + 1, n));
}


/**
* is_prime_number - verifier if it's prime
* @n: int
* Return: result
*/
int is_prime_number(int n)
{
int m = 1;
if (n == 1)
return (0);
return (devide(m, n));
}
