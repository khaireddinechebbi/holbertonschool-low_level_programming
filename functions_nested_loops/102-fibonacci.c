#include <stdio.h>
/**
* main - print first 50 fibonacci numbers
* Return: 0 successful
*/
int main(void)
{
int i = 0;
long j = 1;
long k = 2;
while (i < 50)
{
if (i == 0)
{
printf("%ld", j);
}
else if (i == 1)
{
printf(", %ld", k);
}
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}