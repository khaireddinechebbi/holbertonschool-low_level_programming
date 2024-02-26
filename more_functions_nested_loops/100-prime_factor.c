#include <stdio.h>
#include <math.h>
/**
* main - prints the largest prime factor
* Return: 0 successful
*/
int main(void)
{
long n = 612852475143;
long i = 2;
while (n % 2 == 0)
{
n /= i;
if (n == 1)
{
printf("%ld", i);
}
i++;
}
return (0);
}
