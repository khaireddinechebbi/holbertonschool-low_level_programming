#include <stdio.h>
/**
 * main - print if number is positive
 * Return: Always 0 (Success)
*/
int main(void)
{
int i, j, x, y;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (x = i; x < 10; x++)
{
for (y = j; y < 10; y ++)
{
if (i != x || j != y)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(x + '0');
putchar(y + '0');
if (i !=9 || j != 8 || x != 9 || y != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
