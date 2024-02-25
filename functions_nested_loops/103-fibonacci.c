#include <stdio.h>
/**
* main - prints the sum the event terms
* Return: 0 successful
*/
int main(void)
{
int i = 0, j = 1, k = 2, s = k;
while ((k + j) < 4000000)
{
k += j;
if (k % 2 == 0)
{
s += k;
}
j = k - j;
i++;
}
printf("%d\n", s);
return (0);
}
