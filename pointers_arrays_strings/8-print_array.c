#include "stdio.h"
/**
* print_array - print arrays
* @a: array
* @n: number of elements of the array
*/
void print_array(int *a, int n)
{
int i;
if (n > 0)
for (i = 0; i < n; i++)
if (i != n - 1)
printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}
