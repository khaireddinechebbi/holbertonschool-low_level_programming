#include "main.h"
/**
 * print_sign - print signs
 * @n: a character
 * Return: 1 if +, -1 if - and 0 if zero
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else 
{
_putchar('+');
return(1);
}
}
