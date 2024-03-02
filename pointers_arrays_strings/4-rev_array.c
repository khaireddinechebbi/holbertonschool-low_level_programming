#include "main.h"
/**
* reverse_array - print verse array
* @a: array
* @n: int
*/
void reverse_array(int *a, int n)
{
int i, r;
if (n )
for (i = 0; i < (n - 1) / 2; i++)
{
r = a[i];
a[i] = a[n - i];
a[n - i] = r;
}
}
