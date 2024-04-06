#include "main.h"
/**
* flip_bits - Returns the number of bits you would need to flip
* @n: The first number
* @m: The second number
* Return: The number of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int r = n ^ m;
unsigned int i = 0;

while (r != 0)
{
while (r)
{
i += r & 1;
r >>= 1;
}

return (i);
}
}
