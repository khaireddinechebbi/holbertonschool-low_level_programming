#include "main.h"
/**
* reverse_array - print verse array
* @a: array
* @n: int
*/
void reverse_array(int *a, int n)
{
int i, r;
for (i = n - 1; i > n / 2; i--)
{
r = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = r;
}
}
