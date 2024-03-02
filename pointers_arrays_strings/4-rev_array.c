#include "main.h"
/**
* reverse_array - print verse array
* @a: array
* @n: int
*/
void reverse_array(int *a, int n)
{
int i, r = 0;
n -= 1;
for (i = 0; i <= n / 2; i++)
{
r = s[i];
s[i] = s[n - i];
s[ln - i] = r;
}
}
