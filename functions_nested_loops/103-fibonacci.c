#include <stdio.h>
/**
* main - prints the sum the event terms
* Return: 0 successful
*/
int main(void)
{
int i = 1, j = 2, s;
while (s < 4000000)
{
if (i == 1 && j == 2)
{
s = i + j;
}
j += i;
i = j - i;
s += j;
s++
}
printf("%d", s);
return (0);
}
