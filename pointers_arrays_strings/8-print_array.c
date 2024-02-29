#include "stdio.h"
/**
* print_array - print arrays
* @a: array
* @n: number of elements of the array
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i ++)
printf("%d\n", a[i]);
}
