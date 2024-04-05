#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string
* Return: result
*/
unsigned int binary_to_uint(const char *b)
{
int i, r = 0, p = 1, len = 0;

if (b == NULL)
return (0);

while (b[len])
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (i != len - 1)
p *= 2;
if (b[i] == '1')
r += p;
}
return (r);
}
