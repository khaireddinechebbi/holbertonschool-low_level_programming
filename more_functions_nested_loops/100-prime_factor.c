#include <stdio.h>
#include <math.h>
/**
* main - prints the largest prime factor
* Return: 0 successful
*/
int main(void)
{
long n = 612852475143;
long i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n /= i;
}
if (n == 1)
{
printf("%ld\n", i);
}
}
return (0);
}
