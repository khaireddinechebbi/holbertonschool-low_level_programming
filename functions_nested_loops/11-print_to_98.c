#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print numbers
* @n: int
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d", i);
printf("\n");
}
else
{
printf("%d, ", i);
}
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("98");
printf("\n");
}
}
