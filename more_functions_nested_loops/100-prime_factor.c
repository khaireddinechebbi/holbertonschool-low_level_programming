#include <stdio.h>
/**
* main - prints the largest prime factor
* Return: 0 successful
*/
int main(void)
{
int i = 1;
long n = 612852475143;
while (n >= 1)
i++;
{
if (n % i == 0)
{
n = n / i;
}
if (n == 1)
printf("%d", i);
}
return (0);
}
